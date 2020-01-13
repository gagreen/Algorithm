n = int(input())

for i in range(n*n, n*(n-1), -1) :
    for j in range(i-1, (n*n - n*(n-1))%n-1 , -n) :
        index = j%26
        # print('%2d'%(index), end=' ')
        print(chr(65 + index), end=' ')
    print('')