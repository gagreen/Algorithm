import math

def primeCheck(a) :
    if a == 1:
        return False
    
    for i in range(2, int(math.sqrt(a))+1):
        if a%i == 0:
            return False
    
    return True


m = int(input(""))
n = int(input(""))
sum = 0
min = n

for i in range(m, n+1):
    if primeCheck(i):
        sum += i
        if min > i :
            min = i

if sum == 0:
    print('-1')
else :
    print('{0}\n{1}'.format(sum, min))