th_name = {"th1":"东方灵异传　～ Highly Responsive to Prayers.","th2":"东方封魔录　～ the Story of Eastern Wonderland.",
            "th3":"	东方梦时空　～ Phantasmagoria of Dim. Dream.","th4":"	东方幻想乡　～ Lotus Land Story.",
            "th5":"东方怪绮谈　～ Mystic Square."}
th_name["th6"] = "东方红魔乡　～ the Embodiment of Scarlet Devil."
th_name["th7"] = "	东方妖妖梦　～ Perfect Cherry Blossom."
th_name["th8"] = "东方永夜抄　～ Imperishable Night."
th_name["th9"] = "东方花映塚　～ Phantasmagoria of Flower View." 
th_name["th10"] = "	东方风神录　～ Mountain of Faith."
th_name["th11"] = "东方地灵殿　～ Subterranean Animism."
th_name["th12"] = "东方星莲船　～ Undefined Fantastic Object."
th_name["th13"] = "东方神灵庙　～ Ten Desires."
th_name["th14"] = "东方辉针城　～ Double Dealing Character."
th_name['th15'] = '东方绀珠传　～ Legacy of Lunatic Kingdom.'
th_name['th16'] = '东方天空璋　～ Hidden Star in Four Seasons.'
th_name['th17'] = '东方鬼形兽　～ Wily Beast and Weakest Creature.'
th_name['th18'] = '东方虹龙洞　～ Unconnected Marketeers.'
th_name['th19'] = '东方兽王园　～ Unfinished Dream of All Living Ghost.'
th_name['th20'] = '东方锦上京　～ Fossilized Wonders.'

th = input("请输入你想要查询的东方整数作序号：(q退出)\n")
while th != 'q':
    if th in th_name:
        print("整数作" + th + "的名称为：\n" + th_name[th])
    else:
        print("确定你输入的是整数作序号吗？")
        print("目前字典仅收入了th1~th" + str(len(th_name)) + "的整数作名称")
    th = input("请输入你想要查询的东方整数作序号：(q退出)\n")