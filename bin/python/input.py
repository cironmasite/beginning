# BMI = 体重 / (身高 ** 2 )
UserWarning = input("请输入你的体重(kg)：\n")
UserHeight = input("请输入你的身高(m)：\n")
UserBMI = float(UserWarning) / (float(UserHeight) ** 2)
print(f"你的BMI为: {UserBMI:.1f}")

'''
 偏瘦：BMI < 18.5
 正常：BMI >= 18.5 and BMI < 24.9
 偏重：BMI >= 24.9 and BMI < 27.0
 肥胖：BMI >= 27.0 and BMI < 30.0
 严重肥胖：BMI >= 30.0
'''

if UserBMI < 18.5:
    print("偏瘦")
elif UserBMI >= 18.5 and UserBMI < 24.9:
    print("正常")
elif UserBMI >= 24.9 and UserBMI < 27.0:
    print("偏重")
elif UserBMI >= 27.0 and UserBMI < 30.0:
    print("肥胖")
elif UserBMI >= 30.0:
    print("严重肥胖")