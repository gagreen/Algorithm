while True:
    code = int(input("ASCII code =? "))
    
    if code < 33 or code > 127:
        break
    
    print(chr(code))
