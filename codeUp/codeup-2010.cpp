import math
 
b,n = input().split()
b = int(b)
n = int(n)
index = 1
tmp = 0
min = b
for a in range(1, b+1):
    tmp = abs(pow(a, n)-b)
    if tmp < min :
        min = tmp
        index = a
print(index)
