from itertools import combinations

n, k = input("").split()
n = int(n)
k = int(k)
data = input("").split()
data.sort()
data = ' '.join(data)
print(data)

com = list(map(' '.join, combinations([str(i) for i in range(1,n+1)], k)))

check = 0
for i in range(len(com)):
    if data == com[i]:
        check = 1
        print(com[i+1])
        break

if check == 0:
    print('NONE')