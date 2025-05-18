## GET 获取
POST 新增 body[加密]
PUT 修改 body[加密]
DELETE 删除 

file
/api/files - POST 新建一个文件
body = {
    "name": "filename",
    "content": "i like python"
}

/api/files?name=filename - GET 获取一个文件

/api/files - PUT 修改一个文件
body = {
    "name": "filename",
    "content": "i like China"
}

/api/files?name=filename - DELETE 删除一个文件