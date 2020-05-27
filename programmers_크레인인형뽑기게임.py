def solution(board, moves):
    answer = 0
    basket = []
    for turn in moves:
        for line in board:
            if line[turn-1] != 0:
                basket.append(line[turn-1])
                line[turn-1] = 0
                # print(turn, end=": ")
                for idx in range(len(basket)-1 ,0, -1):
                    # print(idx, end=" ")
                    if basket[idx] == basket[idx-1]:
                        answer += 2
                        basket.pop()
                        basket.pop()
                        break
                # print()
                break
        
    return answer