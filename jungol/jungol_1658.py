
def getGcd(x, y):
    if x % y == 0 :
        return y
    return getGcd(y, x%y)



n,m = input("").split()
n = int(n)
m = int(m)


gcd = getGcd(n, m)
lcm = n*m//gcd

print('{0}\n{1}'.format(gcd, lcm))