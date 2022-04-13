def biggerAbs(a, b):
    if(type(a) == int):
        ma, mb = abs(a), abs(b)
        return (a if ma > mb else b)
    else:
        ma, mb = abs(a), abs(b)
        return (a if ma < mb else b)
    


a, b = input().split()
c, d = input().split()
a = int(a)
b = int(b)
c = float(c)
d = float(d)

print('%d'%(biggerAbs(a, b)))
print('%.2f'%(biggerAbs(c, d)))

