def solution(prices):
    answer = []
    
    for pre in range(0, len(prices)-1): # 시점의 시작
        for now in range(pre+1, len(prices)): # 시점과 비교할 요소
            # print(prices[pre], prices[now])
            if prices[now] < prices[pre]: # 가격이 떨어졌다면
                break # 중지
        answer.append(now-pre) # 가격이 떨어지지 않았던 동안을 리스트에 삽입
        
    answer.append(0) # 마지막 요소
    return answer