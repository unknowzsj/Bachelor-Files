# 用pop（）会把所有的都删除掉，因为它是从栈顶删到栈底，qqq真好位于栈底
sandwich_orders = ['qqq', 'www', 'eee', 'qqq', 'qqq', 'eee']

print("qqq are sold out!")
while 'qqq' in sandwich_orders:
    sandwich_orders.remove('qqq')

print(sandwich_orders)
