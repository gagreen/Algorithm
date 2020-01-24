fir = int(input())
sec = int(input())

li = list()

li.append((sec%100)%10)
li.append((sec%100)//10)
li.append(sec//100)
li.append(sec)

for i in li :
    print(fir*i)