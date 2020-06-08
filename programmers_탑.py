def solution(heights):
    answer = []
    while heights:
        send = heights.pop()
        temp = len(answer)
        # print('send:',send, 'len(heights)', len(heights), 'len(answer)', temp)
        for reci in range(len(heights)-1, -1, -1):
            if send < heights[reci]:
                answer.append(reci+1)
                # print('send:', send, 'reci:', heights[reci])
                break
        if temp == len(answer):
            answer.append(0)
    
    answer.reverse()
    return answer

print(solution([5,4,3,2,1]))