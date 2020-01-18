n = int(input())

if 1 > n or n > 100 or n%2 == 0:
    print("INPUT ERROR!")
    exit()

for i in range(0, n//2+1) :
    for j in range(0, i) :
        print(' ', end='')
    
    for j in range(0, i*2+1) :
        print('*', end='')
    
    print('')

for i in range(n//2-1, -1, -1) :
    for j in range(0, i) :
        print(' ', end='')

    for j in range(0, i*2+1) :
        print('*', end='')
    
    print('')