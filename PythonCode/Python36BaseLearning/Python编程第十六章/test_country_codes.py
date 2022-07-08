import unittest
from country_codes import get_country_code

class CountryCodeTestCase(unittest.TestCase):
    """测试country_codes.py模块"""
    def test_country_code(self):
        """能够正确得到国别名吗？"""
        country_code = get_country_code("Yemen, Rep.")
        self.assertEqual(country_code, 'ye')


if __name__ == "__main__":
    unittest.main