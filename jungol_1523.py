
n, m = input().split()
n = int(n)
m = int(m)

if n > 100 or n < 1:
    print("INPUT ERROR!")
    exit()

if m == 1 :
    for i in range(0, n):
        for j in range(0, i+1) :
            print('*', end='')
        print('')

elif m == 2 :
    for i in range(n-1, -1, -1) :
        for j in range(0, i+1):
            print('*', end='')
        print('')

elif m == 3 :
    for i in range(0, n) :
        for j in range(1, n-i) :
            print(" ", end='')

        for j in range(0, i*2+1) :
            print("*", end='')

        print('')

else :
    print("INPUT ERROR!")
