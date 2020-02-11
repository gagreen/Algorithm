alpha = input('')
sentence = input('')

encoding = dict()
index = 0
for i in  alpha :
    encoding[index] = i
    index = index+1

for i in sentence :
    if i == ' ' :
        print(' ', end='')
    elif i.islower() :
        index = ord(i) - ord('a')
        print(encoding[index], end='')
    elif i.isupper :
        index = ord(i) - ord('A')
        print(encoding[index].upper(), end='')
