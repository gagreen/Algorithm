def powEach(n):
    if n == 0:
        return 0
    return int((n%10)**2) + powEach(n//10)

n = int(input())
print(powEach(n))