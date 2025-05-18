i = input("0.1试作型计算机，输入0开始计算，输入其他则进入规则查看。\n")
if i == "0":
    while True:
        v = input("请输入表达式，如：1+2*(3-4)/5。（q退出）\n")
        if v == "q":
            break      
        try:
            result = eval(v)
            print(result)
        except ZeroDivisionError:
            print("除数不能为0。")
        except SyntaxError:
            print("请输入正确的表达式。")
        
    # ...执行计算逻辑...
else:
    print("本计算机暂只支持数的加减乘除运算，输入q可退出。")