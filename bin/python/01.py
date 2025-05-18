#一行注释
""""
多行注释"""

a = 1             # 整数int
b = 1.1           # 浮点型float
c = "HELLO"    # 字符串
d = True        # 布尔值
e = False

a = [1,2,3]     #列表
b = (1,2,3)     #元组
c = {1,2,3}     #集合
d = {1:"a",2:"b"}    #字典

print(f"a={a}") = print("a=",a);    #打印，两种效果一致  （\t 为长空格）
a = int(input("请输入："));
print("He said\"Let\'s go!\"")    # 引号前可加\来将引号转化为字符
print("""a
      b
      c
      d
      e
      f
      g""");                         # 三引号可换行

print(len('c'));
print('HELLO'[3]);        # 索引:可输出引号内字符串的一个字符0，1，2，3故输出为第四位的L
n = None;                  # 空值，意思为完全没有值，若不知一个变量的值，可先输入None
type('HELLO')        # 该函数可用于输出变量类型，得到输入变量的类型