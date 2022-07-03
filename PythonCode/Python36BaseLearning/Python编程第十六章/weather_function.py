import csv

from datetime import datetime


def write_file(filename, dates, highs, lows, high_num=8, low_num=9):
    with open(filename) as f_obj:
        reader = csv.reader(f_obj)
        header_row = next(reader)  # 该方法将reader阅读器向下移一行
        # 打印文件头及其位置
        # enumerate(header_row)  # 获取每个元素的索引和值
        # for index, column_header in enumerate(header_row):
        #     print(index, column_header)

        # 从文件中获取日期、最高温度和最低温度
        for row in reader:  # 遍历每一行
            current_date = datetime.strptime(row[2], "%Y-%m-%d")
            dates.append(current_date)
            if row[high_num] != "":  # 最后一行为空字符，需特殊处理
                high = int(row[high_num])
            highs.append(high)  # 取每行第8列
            if row[low_num] != "":  # 最后一行为空字符，需特殊处理
                low = int(row[low_num])
            lows.append(low)  # 取每行第9列