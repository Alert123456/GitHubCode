from die import Die
import pygal

# 创建一个D6
die_one = Die()

# 掷几次骰子，并将结果储存在一个列表中
results = []
for roll_num in range(1000):
    result = die_one.roll()
    results.append(result)

# 分析结果
frequencies = []
for value in range(1, die_one.num_sides + 1):
    frequency = results.count(value)  # 返回value出现的次数
    frequencies.append(frequency)

# 对结果进行可视化
hist = pygal.Bar()
hist.title = "掷6面的骰子1000次统计"
hist.x_labels = list(range(1, die_one.num_sides + 1))
hist.x_title = "结果"
hist.y_title = "频率"

hist.add('D6', frequencies)
hist.render_to_file('die_visual.svg')

