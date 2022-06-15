message = "\nHello Python编程第十一章 World!\n"
print(message)
# 刷新message 变量
message = "Hello Python编程第十一章 Crash Course World!"
print(message)

a = "This is a string."
b = 'This is also a string,"This is a string."'
print(b)

name = "ada lovelace"
print(name.title())  #title() 方法,首字母大写
print(name.upper())  #upper() 方法,字母全部大写
print(name.lower())  #lower() 方法,字母全部小写

first_name = "ada"
last_name = "lovelace"
full_name = first_name + " " + last_name #字符拼接
print(full_name)
print("Hello, " + full_name.title() + "!")

message = "Hello, " + full_name.title() + "!"
print(message)

print("\tPython编程第十一章")
print("Languages:\n\tPython编程第十一章\n\tC\n\tJavaScript")

favorite_language = 'python '
print(favorite_language)
print(favorite_language.rstrip())
favorite_language = favorite_language.rstrip()
favorite_language = ' python '
print(favorite_language.rstrip()) #删除前方空白
print(favorite_language.lstrip()) #删除后方空白
print(favorite_language.strip()) #删除两侧空白

message = "One of Python编程第十一章's strengths is its diverse community."
print(message)

#习题2-3
name = "eric"
print("你好, " + "name".title() + ", 你今天想学一些Python吗？")
#习题2-4
print(name.upper())
print(name.lower())
print(name.title())
#习题2-5
names = "爱因斯坦"
loop = '"一个从不犯错的人，从来不会尝试任何新的东西"。'
print(names + '曾经说过：'+ loop)

name = names + '曾经说过：'+ loop
print(name)

names = "\n\t\txu jian\n\n\t"

print(names.lstrip())#前边的\n\t全部去掉
print(names.rstrip())#后边的\n\t全部去掉
print(names.strip())
print(names.strip().title())

age = 23
age.__str__()
message = "Happy " + str(age) + "rd Birthday!"
print(message)
message = "Happy " + age.__str__()  + "rd Birthday!"
print(message)
#习题2-8
print(3+5)
print(11-3)
print(2*4)
print(16/2)
#习题2-9
favorite_number = 22
print("My favorite number is " + str(favorite_number))