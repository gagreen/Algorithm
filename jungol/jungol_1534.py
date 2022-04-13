li =[]

def changeBase(n, b):
    
    if n < b :
        if(n >= 10): li.append(chr(n+55))
        else : li.append(n)
        
        return
    
    changeBase(n//b, b)
    
    if(n%b >= 10): li.append(chr(n%b+55))
    else : li.append(n%b)
    


n, b = input("").split()
n = int(n)
b = int(b)
changeBase(n, b)

for i in li:
    print(i, end='')