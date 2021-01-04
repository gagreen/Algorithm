string = str(input("")) # 사용자 입력

size = len(string)
# print(size)
croatian = ['dz=', 'c=', 'c-', 'd-', 'lj', 'nj', 's=', 'z='] # 크로아티아 표기 알파벳

for alpa in croatian: # 문자열 돌기
    
    # print(f'now String is: {string}')
    howMany = 0 # 해당 크로아티안 알파벳이 문자열에 몇 개나 있느냐?
    if alpa in string : # 크로아티안 문자열이 있다면
        # print(alpa)
        howMany = 1
        string = string.replace(alpa, " ", 1)
        for i in range(len(string)//2+1): # 크로아티안 알파벳으로 꽉 채울 가능성
            if(alpa in string):
                howMany += 1
                string = string.replace(alpa, " ", 1)
        
        
        size = size - ((len(alpa) - 1) * howMany)

print(size)