import city_function
import unittest


class LocationTestCase(unittest.TestCase):

    def test_location(self):
        location = city_function.City2('qqq', 'www')
        self.assertEqual(location, 'Qqq,Www')


unittest.main()
