import math

def f583(a, b, c):
    li = [a,b,c]
    li.sort(reverse=True)
    a, b, c = li
    print('%d %d %d'%(math.ceil(a), math.floor(c), round(b)))


a, b, c = input().split()
a, b, c = float(a), float(b), float(c)

f583(a, b, c)
