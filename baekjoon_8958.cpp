#include <stdio.h>

int main() {
	int testCase;
	char grade[81];
	int i, count, score;
	
	scanf("%d", &testCase);
	
	while(testCase--) {
		scanf("%s", grade); // 문자열 입력 

		score = 0;
		count = 0; // 변수 초기화 
		
		for(i=0; grade[i] != 0; i++) {
			if(grade[i] == 'O'){
				score += ++count; // count를 먼저 올리고 점수에 넣기 
			} 
			else if(grade[i] == 'X') {
				count = 0; // 점수 초기화 
			}
		}
		
		printf("%d\n", score); 
	}
}
