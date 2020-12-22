#include <stdio.h>

int main() {
	char str[101];
	int pos;
	int alpabet[26], i;
	
	scanf("%s", str);
	for(i=0; i<26; i++) { alpabet[i] = -1; } // 0 이외의 초기화 방법 
	
	for(i=0; str[i] != NULL; i++) { //문자열의 끝에는 NULL이 오는 것을 이용 
		int tmp = str[i] - 'a';
		if(alpabet[tmp] == -1) {
			alpabet[tmp] = i;
		}
	}
	
	for(i=0; i<26; i++) {
		printf("%d ", alpabet[i]);
	}
}
