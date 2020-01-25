a = int(input())
b = int(input())
c = int(input())

data = str(a*b*c)

li = [0 for i in range(10)]

for i in data :
    i = int(i)
    li[i] = li[i] + 1

for i in range(10) :
    print(li[i])