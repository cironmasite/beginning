from sqlalchemy import Column, String, create_engine
from sqlalchemy.ext.declarative import declarative_base
from sqlalchemy.orm import sessionmaker

# python连接数据库
username = 'root'
password = '123456'
dbAddress = 'localhost'
dbport = 3306
dbname = 'new01'
engine = create_engine(f'mysql+pymysql://{username}:{password}@{dbAddress}:{dbport}/{dbname}')
print('数据库连接成功', engine)


# 定义数据模型
Base = declarative_base()
class User(Base):
    __tablename__ = 'user'
    id = Column(String(20), primary_key=True)
    name = Column(String(20))

Base.metadata.create_all(engine)
Session = sessionmaker(bind=engine)

# 实现方法
class DbMix(object):
    def __init__(self):
        self.session = Session()

    def get_db(self):
        return self.session

class UserMixdb(DbMix):
    def __init__(self):
        super().__init__()

    def create(self, id, name):
        user = User(id=id, name=name)
        self.session.add(user)
        self.session.commit()

    def delete(self, id):
        user = self.session.query(User).filter_by(id=id).first()
        if user:
            self.session.delete(user)
            self.session.commit()
            print(f"ID号{id}已删除")
        else:
            print(f"ID号{id}不存在")

    def update(self, id, name):
        user = self.session.query(User).filter_by(id=id).first()
        if user:
            user.name = name
            self.session.commit()
            print(f"ID号{id}已更新为{name}")
        else:
            print(f"ID号{id}不存在")
    
    def get(self, id):
        user = self.session.get(User, id)
        if user:
            return {
            "id": user.id,
            "name": user.name
        }
        return None

    def list(self):
        users =  self.session.query(User).all()
        return [{
            "id": user.id,
            "name": user.name
        } for user in users]
        return []

# userinfo = UserMixdb(id='1', name='zhangsan')
# userinfo = UserMixdb(id='2', name='lisi')


# test1 = UserMixdb(id='1',name='')
# print(test1.get())
def main():
    test2 = UserMixdb()
    print(test2.get(id='3'))

    test1 = UserMixdb()
    test1.update(id='3',name='wanglei')

    test4 = UserMixdb()
    print(test4.get(id='3'))

    test3 = UserMixdb()
    test3.delete(id='3')
    
    userinfo = UserMixdb()
    userinfo.create(id='3', name='wangwu')

    print(UserMixdb().list())

# 实现一个鸭子模型
# 鸟类
class Bird():
    def __init__(self):
        pass

    def gaga(self):
        return 'jiu jiu'

    def fly(self):
        return True

    def swim(self):
        return False
    
    def eat(self):
        return '虫子'

# 鸭子类
class Duck(Bird):
    def __init__(self):
        pass

    def gaga(self):
        return '嘎嘎叫'

    def fly(self):
        return False

    def swim(self):
        return True
    
# 乌鸦类
class Uqia(Bird):
    def __init__(self):
        pass


duck = Duck()
print('鸭子怎么叫：', duck.gaga())
print('鸭子会飞吗: ', duck.fly())
print('鸭子吃什么：', duck.eat())

if  __name__ == '__main__':
    main()