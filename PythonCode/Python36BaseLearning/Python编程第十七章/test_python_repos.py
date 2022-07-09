# 习题17-3
import unittest
import requests
from python_repos import get_status_code

class StatusCodeTestCase(unittest.TestCase):
    """测试country_codes.py模块"""
    def test_status_code(self):
        """能够正确得到status code吗？"""
        url = 'https://api.github.com/search/repositories?q=language:java&sort=stars'
        r = requests.get(url)
        self.assertEqual(r.status_code, 200)


if __name__ == "__main__":
    unittest.main