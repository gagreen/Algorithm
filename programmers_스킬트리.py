def solution(skill, skill_trees):
    answer = 0
    
    for skills in skill_trees:  # 각각의 스킬트리
        flag = 1                # 제대로 된 트린지, 아닌지
        tree = list(skill)
        for s in skills:    # 스킬 하나하나
            # if tree:
                # print(skills, tree[0])
            
            if tree and s == tree[0]: # tree 안에 데이터가 있고
                
                tree.remove(tree[0])
                
            elif s in tree[1:]:
                # print('remove:', skills)
                flag = 0
                break
        print()
        if flag == 1:
            # print('\t', skills)
            answer += 1
    
    return answer