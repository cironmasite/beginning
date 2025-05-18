import pymysql

conn = pymysql.connect(host='127.0.0.1', port=3306, user='root', passwd='123456', db='new01',charset='utf8')
#  创建游标
cursor = conn.cursor()

# 修正 CREATE TABLE 语句中的拼写错误（MENT → AUTO_INCREMENT）
sql = """
CREATE TABLE IF NOT EXISTS `people` (
  `id` INT(11) NOT NULL AUTO_INCREMENT,
  `name` VARCHAR(255) NOT NULL,
  `age` INT(11) NOT NULL,
  `location` VARCHAR(255) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
"""

cursor.execute(sql)
conn.commit()