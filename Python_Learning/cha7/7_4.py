tips = 'please input your food'
tips += '\n(Enter "q" when you are finished) :'

food = ""

while food != 'q':
    food = input(tips)

    if food != 'q':
        print('you want to eat ' + food)
