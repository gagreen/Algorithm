import math

n = int(input(""))
arr = []

for i in range(1, int(math.sqrt(n))+1) :
    if n%i == 0:
        arr.append(i)
        if n//i != i :
            arr.append(n//i)

arr.sort()

for i in arr :
    print(i, end=' ')