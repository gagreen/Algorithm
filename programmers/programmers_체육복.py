def solution(n, lost, reserve):
    answer = 0 # n - len(lost)
    
    v = [1] * n
    for l in lost:
        v[l-1] -= 1
    for r in reserve:
        v[r-1] += 1
    
    for i in range(0, len(v)):
        if v[i] == 1 or v[i] == 2:
            answer += 1
        elif v[i] == 0:
            if i-1 >= 0 and v[i-1] == 2:
                v[i-1] = 1
                v[i] = 1
                answer += 1
            elif i+1 < len(v) and v[i+1] == 2:
                v[i+1] = 1
                v[i] = 1
                answer += 1
    
    # for stu in lost:
    #     if (stu-1) in reserve: # 전 친구
    #         answer += 1
    #         reserve.remove(stu-1)
    #     elif stu in reserve:       # 본인
    #         answer += 1
    #         reserve.remove(stu)
    #     elif stu+1 in reserve:   # 다음 친구
    #         answer += 1
    #         reserve.remove(stu+1)
    
    return answer