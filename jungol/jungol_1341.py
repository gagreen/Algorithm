step = 1
s, e = input().split()
s = int(s)
e = int(e)

if s > e :
    step = step * (-1)
    e = e - 1
else :
    e = e + 1

for dan in range(s, e, step) :
    for i in range(1, 9+1) :
        print('%d * %d = %2d'% (dan, i, dan*i), end='   ')
        if i%3 == 0:
            print('')
    print('')