# python语句太长需要换行，最好保持在80个字符之内
# 可以在setting.json里面设置 editor.rulers：[80]
# 这样会有竖线提醒你
# 句子太长用\进行换行连接
# print语句中换行不用\进行连接，但是两行要对齐
# #

my_name = 'Zhan Shanjun' +\
    ' Z'
print('hello ' + my_name + ',would you like to learn some Python today?')
print('hello ' + my_name +
      'nihao')
