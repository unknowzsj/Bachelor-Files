import User


class Admin(User.User):

    def __init__(self, first_name, last_name, city):
        super().__init__(first_name, last_name, city)
        self.Privileges = Privileges()


class Privileges():

    def __init__(self):
        self.privileges = ['q', 'w', 'c']

    def show_privileges(self):
        print("the admin can :")
        print(self.privileges)
