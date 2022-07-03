import matplotlib.pyplot as plt

from random_walk import RandomWalk
import walk_function as wf
import pygal

# 只要程序处于活动状态，就不断的模拟随机漫步
while True:
    # 创建一个RandomWalk实例，并将其包含的点都绘制出来
    rw = RandomWalk(50000)
    rw.fill_walk()
    wf.Init_Setting(plt, rw)
    # hist = pygal.Bar()
    # hist.x_labels = rw.x_values
    # hist.add('D6 * D6', rw.y_values)
    plt.show()
    keep_runing = input("继续做随机漫步吗？(y/n): ")
    if keep_runing == "n":
        break
