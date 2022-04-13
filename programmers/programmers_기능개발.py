def solution(progresses, speeds):
    answer = []
    minKey = 0
    finish = []
    finish_stack = []
    
    for i in range(len(progresses)):
        work_time = (100 - progresses[i]) // speeds[i] # 남은 작업 / 하루 작업량 => 일수
        if (100-progresses[i]) % speeds[i] != 0: # 나머지가 있다면 하루 추가
            work_time = work_time + 1
        finish.append(work_time) # 삽입
    
    finish_stack.append(finish[0]) # stack 처음 삽입
    finish_dic = {finish[0]:1} # stack 처음 삽입
    
    for i in range(1, len(finish)): # 
        if finish[i-1] < finish[i] and (finish[i] > finish_stack[-1]):
            finish_dic[finish[i]] = 1
            finish_stack.append(finish[i])
        else:
            finish_dic[finish_stack[-1]] = finish_dic[finish_stack[-1]] + 1
    
    for key in finish_dic.keys():
        answer.append(finish_dic[key])
    
    
#   count = 0
#     while progresses:
#         progresses = [x + y for x, y in zip(progresses, speeds)] # 하루가 지나는 계산(현재 + 진척도)
#         flag = 0
#         # 완료된 작업 개수
        
#         # print(list(enumerate(progresses)))
        
#         for index, check in enumerate(progresses):
#             if check >= 100:
#                 # 삭제 및 count++
#                 count += 1
                
#                 if index == 0:
#                     flag = 1
#                 del progresses[index]
#                 del speeds[index]
        
#         if flag == 1 : # 배포할 것이 있다면
#             answer.append(count)
#             count = 0
#         # print(progresses, answer)
    
    return answer