#include<stdio.h>
#include<string.h> 

int findNumber(char alp) { // 알파벳을 입력 받아 해당 위치의 숫자 반환 
	char dial[8][5] = {{'A', 'B', 'C'}, 
					 {'D', 'E', 'F'}, 
					 {'G', 'H', 'I'}, 
					 {'J', 'K', 'L'}, 
					 {'M', 'N', 'O'}, 
					 {'P', 'Q', 'R', 'S'}, 
					 {'T', 'U', 'V'}, 
					 {'W', 'X', 'Y', 'Z'}}; // 다이얼의 알파벳 배열 
	int i, j;
	int output; 
	
	for(i=0; i<8; i++) { //dial의 열 크기만큼 반복 
		for(j=0; j<strlen(dial[i]); j++) {
			
			if(alp == dial[i][j]) {
				return i + 2; // 시작이 2이므로 + 2 
			}
		}
	}
	
	return -1; // 오류 제어하지는 않음 
}

int main() {
    char input[17];
    int sum=0, i, tmp;
    
    scanf("%s", &input);
    
    for(i=0; input[i] != NULL; i++) {
//        tmp = (input[i] - 'A') / 3;  /*
//        if(input[i] == 'Z') {         * 3개씩이라는 규칙성이 깨지므로 실패 
//        	tmp--;						*
//		}								*/

//        printf("%d\n", findNumber(input[i])); // 다이얼 숫자
        sum +=  findNumber(input[i]) + 1;
    }
    
    printf("%d", sum);
}
