tips = 'please input your food'
tips += '\n(Enter "q" when you are finished) :'

food = ""
active = True

'''2'''
while active:
    food = input(tips)

    if food == 'q':
        active = False
    else:
        print('you want to eat: ' + food)

'''3'''
while active:
    food = input(tips)

    if food == 'q':
        break
    else:
        print('you want to eat: ' + food)
