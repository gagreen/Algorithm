def recMul(n):
    if n == 0:
        return 1
    if n%10 == 0:
        return recMul(n//10)
    return (n%10) * recMul(n//10)

i, j, k = input("").split()
i = int(i)
j = int(j)
k = int(k)

print(recMul(i*j*k))