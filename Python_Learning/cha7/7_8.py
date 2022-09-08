sandwich_orders = ['qqq', 'www', 'eee']
finished_sandwich = []

while sandwich_orders:
    finished = sandwich_orders.pop()
    print('I have finished ' + finished.title())
    finished_sandwich.append(finished)

print('the all sandwich are: ')
for sandwich in finished_sandwich:
    print(sandwich)
