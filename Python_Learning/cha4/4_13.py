# 禁止给元组的元素赋值，但是可以重新定义整个元组
animals = ('cat', 'dog', 'lion', 'snake', 'buffalo')

'''1'''
for animal in animals:
    print(animal)

'''2 报错'''
# animals[2] = 'mouse'

'''3'''
animals = ('cat', 'dog', 'lion', 'panda', 'dolphin')
for animal1 in animals:
    print(animal1)
