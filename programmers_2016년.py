def solution(a, b):
    answer = ''
    yo = 5
    days = ['SUN','MON','TUE','WED','THU','FRI','SAT']
    months = [31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    
    for month in range(0, a):
        # print(month+1, months[month])
        for day in range(1, months[month]+1):
            # print('\t' ,day)
            if(a == (month+1) and b == day):
                print('breaked')
                break
            yo = (yo+1)%7
    # print(yo%7)
    answer = days[yo]
    return answer