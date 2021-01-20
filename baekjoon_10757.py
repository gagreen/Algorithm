a, b = input().split(" ") # 문자열로 입력 받기
maxLen = len(a) if len(a) > len(b) else len(b) # 가장 긴 문자열 길이 구하기

a = a.zfill(maxLen)
b = b.zfill(maxLen) # 자릿수 맞추기

output = ''
carry = 0 # 자리올림 값
for i in range(1, maxLen+1):
    # print(a[-1*i])
    tmpSum = int(a[-1*i]) + int(b[-1*i]) + carry # 임시로 더한 값
    # print(f"{int(a[-1*i])} + {int(b[-1*i])} + {carry} = {tmpSum}")
    
    carry = 0 # 자리올림수 초기화
    if (tmpSum >= 10): # 자리 올리기
        tmpSum -= 10
        carry = 1
    
    output = str(tmpSum) + output


if(carry > 0):
    output = str(carry) + output

print(output)
