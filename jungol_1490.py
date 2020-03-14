from itertools import combinations

n, k = input("").split()
n = int(n)
k = int(k)
data = input("").split()
data = ' '.join(data)

com = list(map(' '.join, combinations([str(i) for i in range(1,n+1)], k)))
# 각각의 조합을 만들어 문자열로 
check = 0
for i in range(len(com)):
    print(data, com[i])
    if data == com[i]:
        check = 1
        print(com[i+1])
        break

if check == 0:
    print('NONE')