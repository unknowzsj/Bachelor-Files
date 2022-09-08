import unittest
from employee import Employee


class TestEmployee(unittest.TestCase):

    def setUp(self):
        self.employee = Employee('qwe', 'asd', 1000)

    def test_give_default_raise(self):
        self.employee.give_raise(777)
        self.assertEqual(1777, self.employee.money)

    def test_give_custom_raise(self):
        self.employee.give_raise()
        self.assertEqual(6000, self.employee.money)


unittest.main()
