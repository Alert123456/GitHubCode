import csv

from matplotlib import pyplot as plt
from datetime import datetime
from weather_function import write_file as wf

sitka_weather = 'data/sitka_weather_2018_full.csv'
death_valley = 'data/death_valley_2018_full.csv'
# 打印出csv文件的第一行
s_dates, s_highs, s_lows = [], [], []
d_dates, d_highs, d_lows = [], [], []

wf(sitka_weather, s_dates, s_highs, s_lows)
wf(death_valley, d_dates, d_highs, d_lows, 6, 7)


# 根据数据绘制图形
fig = plt.figure(dpi=128, figsize=(10, 6))
plt.plot(s_dates, s_highs, c='red', alpha=0.5)
plt.plot(s_dates, s_lows, c='blue', alpha=0.5)
plt.plot(d_dates, d_highs, c='red', alpha=0.5)
plt.plot(d_dates, d_lows, c='blue', alpha=0.5)
# 填充着色
plt.fill_between(s_dates, s_highs, s_lows, facecolor='blue', alpha=0.1)
plt.fill_between(d_dates, d_highs, d_lows, facecolor='red', alpha=0.1)

# 设置图形的格式
plt.title("Daily high and low temperatures, 2018", fontsize=24)
plt.xlabel("", fontsize=16)
plt.ylabel("Temperature", fontsize=16)
plt.tick_params(axis='both', which='major', labelsize=16)  # 设置刻度大小

plt.show()


