function solution(arrangement) {
    let answer = 0;
    let temp = 0;
    for(let i=0; i<arrangement.length; i++){
        if (arrangement[i] == '(' && arrangement[i+1] == ')'){
            answer += temp;
            i++;
        }
        else if(arrangement[i] == '('){
            answer++;
            temp++;
        }
        else if(arrangement[i] == ')'){
            temp--;
        }
    }
    return answer;
}