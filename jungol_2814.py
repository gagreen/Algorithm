def binToDec(a) :
    if len(a) == 1:
        return int(a)
    return binToDec(a[0:-1]) *2 + int(a[-1])


n = input("")
output = binToDec(n)
print(output)
