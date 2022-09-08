# 7_1
car = input('what do you want: ')
print("let me see if I can find you a " + car.title())

# 7_2
people = input('how many people: ')
people = int(people)

if people > 8:
    print("we don't have a table for " + str(people) + " people")
else:
    print('here is a table')


# 7_3
num = input('write a number: ')
num = int(num)

if num % 10 == 0:
    print('it is ending with 0 ')
else:
    print('it is not ending with 0')
