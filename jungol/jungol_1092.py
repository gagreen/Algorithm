def pow(x, y):
    if y == 0:
        return 1
    
    n = pow(x, y//2)
    tmp = n * n
    if y%2 == 0:
        return tmp
    else:
        return x * tmp


x, y = input().split(' ')
x = int(x)
y = int(y)

output = pow(x, y)
print(output%20091024)