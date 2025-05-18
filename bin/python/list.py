new_list = []
new_list.append(1)          # 添加元素在列表名字后加.append()
new_list.append(2)
new_list.append(3)
new_list.append(4)

print(new_list)

new_list[0] = 9

print(len(new_list))
print(new_list[0])          # 获取列表中的元素
print(new_list[3])

max_new_list = max(new_list)
print(max_new_list)
min_new_list = min(new_list)
print(min_new_list)
sorted_new_list = sorted(new_list)
print(sorted_new_list)