"""一个描述饭店的类"""


class Restaurant:
    def __init__(self, restaurant_name, cuisine_type):
        self.restaurant_name = restaurant_name
        self.cuisine_type = cuisine_type
        self.number_served = 0

    def describe_restaurant(self):
        print("餐馆的名字为: " + self.restaurant_name.title() + "，空座为: "
              + str(self.cuisine_type) + '.'
              + "这家餐厅有" + str(self.number_served) + '人来吃过！')
        self.open_restaurant()

    def open_restaurant(self):
        print("该餐厅正在营业中，欢迎前来就餐！")

    def increment_number_served(self, invalue):
        if invalue > 0:
            print("本餐厅预计可能接待人数上限" + str(invalue))
        else:
            print("不可以输入负数！")