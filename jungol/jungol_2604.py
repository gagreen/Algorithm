n = input("")

check = ' '
height = 0

for i in n:
    if i != check :
        height += 10
        check = i
    else :
        height += 5
    
print(height)