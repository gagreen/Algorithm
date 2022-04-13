def listSum(n):
    if n == 1:
        return 1
    return listSum(n//2) + listSum(n-1)


n = int(input())

print(listSum(n))