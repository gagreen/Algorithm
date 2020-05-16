def recNum(n):
    if n <= 0:
        return

    recNum(n-2)
    print(n, end=" ")


n = int(input(""))
recNum(n)