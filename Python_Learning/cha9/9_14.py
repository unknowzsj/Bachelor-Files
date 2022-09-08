from random import randint


class Die():

    def __init__(self):
        self.side = 0

    def roll_die(self):
        x = randint(1, 6)
        print('the random is ' + str(x))


die = Die()
die.roll_die()
die.roll_die()
die.roll_die()
die.roll_die()
die.roll_die()
