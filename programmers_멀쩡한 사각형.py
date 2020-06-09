def getGCD(a, b):
    if a < b:
        a, b = b, a
    
    # 유클리드 호제법
    while b != 0:
        r = a%b
        a = b
        b = r
    return a


def solution(w,h):
    answer = w * h # 원래 사각형의 넓이 (정사각형의 개수)
    
    gcd = getGCD(w, h)
    # print(answer, gcd)
    
    answer -= w + h - gcd # 중복 배제
    
    return answer