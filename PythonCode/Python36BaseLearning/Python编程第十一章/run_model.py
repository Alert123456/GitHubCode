from function_model import get_formatted_name


print('输入q退出程序！')
while True:
    first = input('请输入一个姓：')
    if first == 'q':
        break
    last = input("请输入你的名：")
    if last == 'q':
        break

    formatted_name = get_formatted_name(first, last)
    print("你输入的姓名为：" + formatted_name + '!')
