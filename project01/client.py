import requests

url_post = 'http://127.0.0.1:8088/new_file'
data={'name':'aarchie','content':'123'}
ps = requests.post(url_post,data=data)
print(ps.text)

url_get = 'http://127.0.0.1:8088/new_file?name=aarchie'
g = requests.get(url_get)
print(g.text)

url_put = 'http://127.0.0.1:8088/new_file'
data={'name':'aarchie','content':'456'}
pu = requests.put(url_put,data=data)
print(pu.text)

url_delete = 'http://127.0.0.1:8088/new_file?name=aarchie'

                                            