def Init_Setting(plt, rw):
    # 设置绘图窗口尺寸
    plt.figure(dpi=128, figsize=(10, 6))

    point_numbers = list(range(rw.num_points))
    plt.scatter(rw.x_values, rw.y_values, c=point_numbers, cmap=plt.cm.Blues,
                edgecolors="none", s=1)
    # ################################################################
    # # 习题15-3
    # plt.plot(rw.x_values, rw.y_values, linewidth=1)
    #
    # # 突出起点和终点
    # plt.plot(0, 0, color='green', linewidth=1000)
    # plt.plot(rw.x_values[-1], rw.y_values[-1], color='red', linewidth=1000)
    ################################################################
    # 突出起点和终点
    plt.scatter(0, 0, c="green", edgecolors='none', s=100)
    plt.scatter(rw.x_values[-1], rw.y_values[-1], c="red", edgecolors='none',
                s=100)


    # 隐藏坐标轴
    plt.axes().get_xaxis().set_visible(False)
    plt.axes().get_yaxis().set_visible(False)