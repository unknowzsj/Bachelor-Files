class User():

    def __init__(self, first_name, last_name, city):
        self.first_name = first_name
        self.last_name = last_name
        self.city = city
        self.login_attempts = 0

    def describe_user(self):
        print("the user's first name is " + self.first_name
              + ",the user's last name is " + self.last_name
              + ",and he(she) is from " + self.city)

    def greet_user(self):
        print("welcom!")

    def increment_login_attempts(self):
        self.login_attempts += 1

    def reset_login_attempts(self):
        self.login_attempts = 0
