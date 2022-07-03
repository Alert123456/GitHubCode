import csv

from matplotlib import pyplot as plt
from datetime import datetime

filename = 'data/sitka_weather_2018_full.csv'
# 打印出csv文件的第一行
with open(filename) as f_obj:
    reader = csv.reader(f_obj)
    header_row = next(reader)  # 该方法将reader阅读器向下移一行
    # 打印文件头及其位置
    # enumerate(header_row)  # 获取每个元素的索引和值
    # for index, column_header in enumerate(header_row):
    #     print(index, column_header)

    # 从文件中获取日期、最高温度和最低温度
    dates, highs, lows = [], [], []
    for row in reader:  # 遍历每一行
        current_date = datetime.strptime(row[2], "%Y-%m-%d")
        dates.append(current_date)
        if row[8] != "":  # 最后一行为空字符，需特殊处理
            high = int(row[8])
        highs.append(high)  # 取每行第8列
        if row[9] != "":  # 最后一行为空字符，需特殊处理
            low = int(row[9])
        lows.append(low)  # 取每行第9列

# 根据数据绘制图形
fig = plt.figure(dpi=128, figsize=(10, 6))
plt.plot(dates, highs, c='red', alpha=0.5)
plt.plot(dates, lows, c='blue', alpha=0.5)
# 填充着色
plt.fill_between(dates, highs, lows, facecolor='blue', alpha=0.1)

# 设置图形的格式
plt.title("Daily high and low temperatures, 2018", fontsize=24)
plt.xlabel("", fontsize=16)
plt.ylabel("Temperature", fontsize=16)
plt.tick_params(axis='both', which='major', labelsize=16)  # 设置刻度大小

plt.show()


