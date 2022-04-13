n, m = input().split()
n = int(n)
m = int(m)
index = 1
for i in range(1, n+1):
    for j in range(1, m+1):
        print(index, end=' ')
        index = index + 1
    print('')