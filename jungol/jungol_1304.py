n = int(input())

for i in range(1, n+1) :
    for j in range(i, (n*n) - (n-i)+1, n) :
        print(j, end=' ')
    print('')