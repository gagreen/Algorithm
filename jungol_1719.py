n, m = input().split()
n = int(n)
m = int(m)
if n > 100 or n < 1 or n%2 == 0:
    print("INPUT ERROR!")
    exit()

if m == 1 :
    for i in range(0, n//2+1) :
        for j in range(0, i+1) :
            print('*', end='')
        print('')
    
    for i in range(n//2-1, -1, -1) :
        for j in range(0, i+1) :
            print('*', end='')
        print('')

elif m == 2 :
    for i in range(0, n//2+1) :
        for j in range(1, n//2+1-i) :
            print(" ", end='')

        for j in range(0, i+1) :
            print('*', end='')
        print('')
    
    for i in range(n//2-1, -1, -1) :
        for j in range(1, n//2+1-i) :
            print(" ", end='')

        for j in range(0, i+1) :
            print('*', end='')
        print('')

elif m == 3 :
    for i in range(n//2, 0, -1) :
        for j in range(1, n//2+1-i) :
            print(" ", end='')

        for j in range(0, i*2+1) :
            print("*", end='')
        
        print('')
    
    for i in range(0, n//2+1) :
        for j in range(1, n//2+1-i) :
            print(" ", end='')

        for j in range(0, i*2+1) :
            print("*", end='')

        print('')

elif m == 4 :
    for i in range(n//2, -1, -1) :
        for j in range(1, n//2+1-i) :
            print(" ", end='')

        for j in range(0, i+1) :
            print('*', end='')
        print('')

    for i in range(0, n//2) :
        print(' ' * (n//2), end='')
        for j in range(0, i+2) :
            print('*', end='')

        print('')

else :
    print("INPUT ERROR!")