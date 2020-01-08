n, m = input().split()
n = int(n)
m = int(m)

if m == 1 :
    for i in range(1, n+1) :
        for j in range(1, n+1) :
            print(i, end=' ')
        
        print('')

elif m == 2 :
    for i in range(1, n+1) :
        start = 1
        stop = n + 1
        step = 1
        if i%2 == 0 :
            start = n
            stop = 0
            step = -1

        for j in range(start, stop, step) :
            print(j, end=' ')
        
        print('')

elif m == 3 :
    for i in range(1, n+1) :
        for j in range(i, i*n+1, i) :
            print(j, end=' ')

        print('')