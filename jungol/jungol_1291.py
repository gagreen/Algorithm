step = 1
while True :
    s, e = input().split()
    s = int(s)
    e = int(e)
    if (2 <= e and e <= 9) and (2 <= s and s <= 9) :
        break
    else :
        print('INPUT ERROR!')

if s > e :
    step = step * (-1)
    e = e - 1
else :
    e = e + 1

for i in range(1, 9+1):
    for dan in range(s, e, step):
        print('%d * %d = %2d'% (dan, i, dan*i), end='   ')
    
    print('')