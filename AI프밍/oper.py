len("abc")*("no")

print(2*("no","no","no"))


print((0,0,0)+(1,))

print((1,1)+(1,1))

grocery = []
grocery.append("bread")
grocery.append("milk")
grocery.insert(1, "eggs")
for_fun = ["drone", "vr glasses", "game console"]
grocery.extend(for_fun)

print(grocery)

pi = [3, ".", 1, 4, 1, 5, 9]
pi.pop(1)
print(pi)
pi.pop()
print(pi)
pi.pop()
print(pi)

years = [1984, 1986, 1988, 1988]
print(len(years))
print(years.count(1988))
print(years.count(2017))
print(years.index(1986))
print(years.index(1988))

colors = ["red", "blue", "yellow"]
colors[0] = "orange"
print(colors)
colors[1] = "green"
print(colors)
colors[2] = "purple"
print(colors)


heights = [1.4, 1.3, 1.5, 2, 1.4, 1.5, 1]
heights.reverse()
heights.sort()
heights.reverse()
print(heights)


L = [[], [], []]
L[0] = [1,2,3]
L[1].append('t')
L[1].append('o')
L[1][0] = 'd'
print(L)

emails ="zebra@zoo.com,red@colors.com,tom.sawyer@book.com,pea@veg.com"
emails_list = emails.split(',')
print(emails_list)

stack = []
cook = ['blueberry', 'blueberry', 'blueberry']
stack.extend(cook)
stack.pop()
stack.pop()
cook = ['chocolate', 'chocolate']
stack.extend(cook)
stack.pop()
cook = ['blueberry', 'blueberry']
stack.extend(cook)
stack.pop()
stack.pop()
stack.pop()
print(stack)

line = []
line.append('Ana')
line.append('Bob')
line.pop(0)
line.append('Claire')
line.append('Dave')
line.pop(0)
line.pop(0)
line.pop(0)
print(line)

