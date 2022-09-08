dinner = ['cml', 'wyh', 'cqh', 'ws']

for person in dinner:
    # 3_4
    print('Can I invite you to attend dinner,' + person.title() + '?')

# 3_5
print(dinner[1] + " can't attend, it's so sad")
dinner[1] = 'good man'

for person2 in dinner:
    print('Can I invite you to attend dinner,' + person2.title() + '?')

# 3_6
print('I have found a bigger table, and I want to invite three more persons')
'''在开头加入客人'''
dinner.insert(0, 'qqq')
'''在中间加入客人'''
dinner.insert(3, 'www')
'''在结尾加入客人'''
dinner.append('eee')

for person3 in dinner:
    print('Can I invite you to attend dinner,' + person3.title() + '?')

# 3_7
print('I am so sorry, I can only invite two people because of money')

'''等价于for (i=3;i<=7;i+=1)'''
for i in range(2, len(dinner), 1):
    no_per = dinner.pop()
    print("I'm so sorry for I can't invite you," + no_per)

for person4 in dinner:
    print("welcome," + person4.title() + "!")

'''del删除列表的元素(这里的dinner的索引有点问题)'''
for j in range(0, len(dinner), 1):
    del dinner[-1]
    '''del dinner[j]不能达到效果'''

print(dinner)
print(len(dinner))
