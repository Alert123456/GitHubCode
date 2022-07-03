from die import Die
import pygal

import matplotlib.pyplot as plt
# # 创建一个D6和一个D10
# die_one = Die()
# die_two = Die(10)

# 习题15-7
# 创建两个D8和一个D10
die_one = Die(8)
die_two = Die(8)

# 掷几次骰子，并将结果储存在一个列表中
results = []
# for roll_num in range(50000):
#     result = die_one.roll() + die_two.roll()
#     results.append(result)
# 习题15-6
[results.append(die_one.roll() * die_two.roll()) for roll_num in range(50000)]
# 分析结果
# frequencies = []
max_result = die_one.num_sides * die_two.num_sides
# for value in range(2, max_result + 1):
#     frequency = results.count(value)  # 返回value出现的次数
#     frequencies.append(frequency)

# 返回value出现的次数
# 习题15-6  # 列表解析 用过的都说好
frequencies = [results.count(value) for value in range(2, max_result + 1)
               if results.count(value)]

list1 = []
# 对结果进行可视化
hist = pygal.Bar()
hist.title = "掷6面的两个骰子相乘50000次统计"
# for value in range(2, max_result + 1):
#     if results.count(value) > 0:
#         list1.append(value)


hist.x_labels = [value for value in range(2, max_result + 1)
                 if results.count(value)]
# hist.x_title = "结果"
# hist.y_title = "频率"

# hist.add('D6 * D6', frequencies)
# hist.render_to_file('different_multiply_dice_visual.svg')

######################################
# 习题15-10
# matplotlib用于模拟骰子情况
# plt.plot(hist.x_labels, frequencies, linewidth=5)
# plt.scatter(hist.x_labels, frequencies, linewidth=5)
# plt.show()
