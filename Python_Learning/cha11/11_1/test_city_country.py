from city_functions import City
import unittest


class LocationTestCase(unittest.TestCase):

    def test_location(self):
        location = City('qqq', 'www')
        self.assertEqual(location, 'Qqq,Www')


unittest.main()
