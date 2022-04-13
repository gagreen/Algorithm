n, m = input().split()
n = int(n)
m = int(m)

for i in range(1, n+1):
    if i%2 != 0 :
        for j in range((i-1)*m+1, m*i+1):
            print(j, end=' ')
    else :
        for j in range(i*m, (i-1)*m, -1):
            print(j, end=' ')
    print('') 