#######################################################################
# # 测试是否可完整显示姓名？
# import unittest
# from function_model import get_formatted_name
#
#
# class NamesTestCase(unittest.TestCase):
#     """测试function_model.py"""
#
#     def test_first_last_name(self):
#         """能够正确的处理像Janis Joplin这样的姓名吗？"""
#         formatted_name = get_formatted_name('xu', 'jian')
#         self.assertEqual(formatted_name, 'Xu Jian')  # 断言功能
#
#     def test_first_last_middle_name(self):  # 方法名必须以test开头
#         """能够正确处理像Wolfgang Amadeus Mozart这样的姓名吗？"""
#         formatted_name = get_formatted_name('wolfgang', 'mozart', 'amadeus')
#         self.assertEqual(formatted_name, 'Wolfgang Amadeus Mozart')
#
#
# if __name__ == '__main__':
#     unittest.main()
#######################################################################
# # 习题11-1/11-2
# import unittest
# from function_model import get_city_country_name
#
#
# class CityCountryName(unittest.TestCase):
#     """测试城市名与国家名格式是否对应"""
#
#     def test_city_country(self):
#         """是否能正确测试城市名与国家名格式"""
#         city_country_type = get_city_country_name('harbin', 'chinese')
#         self.assertEqual(city_country_type, 'Harbin, Chinese')
#
#     def test_city_country_population(self):
#         """是否能正确测试城市名与国家名格式"""
#         city_country_type = get_city_country_name('harbin', 'chinese',
#                                                   '50000')
#         self.assertEqual(city_country_type,
#                          'Harbin, Chinese - Population 50000')
#
#
# if __name__ == '__main__':
#     unittest.main()
#######################################################################
# # 一个要测试的类
# import unittest
# from function_model import AnonymousSurvey
#
#
# class TestAnonymousSurvey(unittest.TestCase):
#     """针对AnonymousSurvey类的测试"""
#     def test_store_single_response(self):
#         """测试单个答案会被妥善的存储"""
#         question = '你最先会的语言是什么？'
#         my_survey = AnonymousSurvey(question)
#         my_survey.store_response('English')
#         # 断言是否"English"是否包含在my_survey.responses中
#         self.assertIn("English", my_survey.responses)
#
#     def test_store_three_response(self):
#         """测试单个答案会被妥善的存储"""
#         question = '你最先会的语言是什么？'
#         my_survey = AnonymousSurvey(question)
#         # my_survey.store_response('English')
#         # # 断言是否"English"是否包含在my_survey.responses中
#         # self.assertIn("English", my_survey.responses)
#         responses = ["English", "Spanish", "Mandarin"]
#         for response in responses:
#             my_survey.store_response(response)
#         for response in responses:
#             self.assertIn(response, my_survey.responses)
#
#
# if __name__ == '__main__':
#     unittest.main()
#######################################################################
# import unittest
# from function_model import AnonymousSurvey
# class TestAnonymousSurvey(unittest.TestCase):
#     """针对AnonymousSurvey类的测试"""
#
#     def setUp(self) -> None:
#         """
#         创建一个调查对象和一组答案，供使用的测试方法使用
#         :return:
#         """
#         question = '你最先会的语言是什么？'
#         self.my_survey = AnonymousSurvey(question)
#         self.responses = ["English", "Spanish", "Mandarin"]
#
#     def test_store_single_response(self):
#         """测试单个答案会被妥善的存储"""
#         self.my_survey.store_response(self.responses[0])
#         self.assertIn(self.responses[0], self.my_survey.responses)
#
#     def test_store_three_response(self):
#         """测试三个答案会被妥善的存储"""
#         for response in self.responses:
#             self.my_survey.store_response(response)
#         for response in self.responses:
#             self.assertIn(response, self.my_survey.responses)
#
#
# if __name__ == '__main__':
#     unittest.main()
#######################################################################
import unittest
from function_model import Employee


class TestEmployee(unittest.TestCase):

    def setUp(self):
        self.information = Employee('xu', 'jian', 1000)
        self.total_moneys = [1000, 3000, 6000]
        self.total_Increase_moneys = [0, 2000]

    def test_give_default_raise(self):
        total_money = self.information.give_raise()
        self.assertEqual(total_money, self.total_moneys[2])

    def test_give_custom_raise(self):
        for total_Increase_money in self.total_Increase_moneys:
            total_money = self.information.give_raise(total_Increase_money)
            self.assertIn(total_money, self.total_moneys)


if __name__ == '__main__':
    unittest.main()
