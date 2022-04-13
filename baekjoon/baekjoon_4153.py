
while(True) :
    sides =  list(map(int, input().split()))
    a, b, c = sides
    
    if(a == 0 and b == 0 and c == 0) :
        break
    
    longest = max(sides) # 가장 긴 변 구하기
    sides.remove(longest) # 리스트에서 삭제

    mod_sum = sides[0] ** 2 + sides[1] ** 2 # 나머지 변들의 제곱 합

    if(mod_sum == longest**2) :
        print('right')
    else :
        print('wrong')

 