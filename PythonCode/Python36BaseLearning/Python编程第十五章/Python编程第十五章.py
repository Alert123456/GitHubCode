import matplotlib.pyplot as plt


def line_style():
    """修改显示曲线可读性"""
    # 设置图表标题, 并给坐标轴加上标签
    plt.title("Square Numbers", fontsize=24)  # 设置标题的名字与字号
    plt.xlabel("Value", fontsize=14)  # 设置x轴的名字与字号
    plt.ylabel("Square of Value", fontsize=14)  # 设置y轴的名字与字号

    # 设置刻度标记的大小
    plt.tick_params(axis='both', labelsize=14)


############################################################################

# squares = [1, 4, 9, 16, 25]
# plt.plot(squares, linewidth=5)  # 绘制曲线,设置线宽
#
#
# line_style()
# plt.show()  # 显示曲线
###############################################################################
# # 校正图形
# input_value = [1, 2, 3, 4, 5]
# squares = [1, 4, 9, 16, 25]
# plt.plot(input_value, squares, linewidth=5)
#
# line_style()
# plt.show()  # 显示曲线
###############################################################################
# # 使用scatter()绘制散点图并设置其样式
# # 绘制单个点
#
# plt.scatter(2, 4, s=200)
#
# line_style()
# plt.show()  # 显示曲线
###############################################################################
# # 使用scatter()绘制散点图并设置其样式
# # 绘制多个点
#
# input_value = [1, 2, 3, 4, 5]
# squares = [1, 4, 9, 16, 25]
#
# plt.scatter(input_value, squares, s=100)
#
# line_style()
# plt.show()  # 显示曲线
###############################################################################
# # 自动计算数据
#
# x_values = list(range(1,1001))
# y_values = [x**2 for x in x_values]
#
# plt.scatter(x_values, y_values, c='red', edgecolors='none', s=40)
# plt.scatter(x_values, y_values, c=y_values, cmap=plt.cm.Blues,
#             edgecolors='none', s=40)
#
# line_style()
#
# # 设置每个坐标轴的取值范围
# plt.axis([0, 1100, 0, 1100000])
# plt.show()  # 显示曲线
# plt.savefig('squares_plot.png', bbox_inches='tight')  # 保存图表
###############################################################################
# # 习题15-1
# x_values = list(range(1, 6))
# y_values = [x ** 3 for x in x_values]
# plt.scatter(x_values, y_values, s=40)
# plt.show()
# x_values = list(range(1, 5001))
# y_values = [x ** 3 for x in x_values]
# plt.scatter(x_values, y_values, s=40)
# plt.show()
###############################################################################
# # 习题15-2
# x_values = list(range(1, 6))
# y_values = [x ** 3 for x in x_values]
# plt.scatter(x_values, y_values, c=y_values, cmap=plt.cm.Reds,
#             edgecolors='none', s=40)
# plt.show()
# x_values = list(range(1, 5001))
# y_values = [x ** 3 for x in x_values]
# plt.scatter(x_values, y_values, c=y_values, cmap=plt.cm.Reds,
#             edgecolors='none', s=40)
# plt.show()
###############################################################################
