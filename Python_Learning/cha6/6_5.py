water = {
    'qqq': 'qq',
    'www': 'ww',
    'eee': 'ee',
    }

'''1'''
for key, value in water.items():
    print('the ' + key + ' run through ' + value)

'''2'''
for key in water.keys():
    print(key)

'''3'''
for value in water.values():
    print(value)

# set()找出独一无二的元素（值或键）并创建一个集合
water['ttt'] = 'qq'
print(water)

water1 = set(water.values())
print(water1)
