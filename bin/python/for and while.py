total = 0
Even_number = 0
for i in range(1, 51):
    total += i
    if  i % 2 == 0:
        v = i
        Even_number += v
print(total)
print(Even_number)

print("求两数之和，输入任意数量的数字，结束则输入q，之后再输入一个数字为和，" \
      "若和在先前输入的数字中则会返回这两个数字")
list1 = []
input_num = input("请输入数字：\n")
while input_num != 'q':
    list1.append(int(input_num))
    input_num = input("请输入数字：\n")

#求和
input_numandsum = input("请输入和：\n")
n = len(list1)
for i in range(n):
    for j in range(i+1, n):
        if list1[i] + list1[j] == int(input_numandsum):
            print(f"{list1[i]}和{list1[j]}的和为{int(input_numandsum)}")
    

