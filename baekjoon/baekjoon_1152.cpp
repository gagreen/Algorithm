#include <stdio.h>

int main() {
	char str[1000001];
	int i, count = 0;
	bool space = true; // 이전 글자가 공백인지 (첫 글자는 무조건 세야되기 때문에 true로 초기화) 
	
	scanf("%[^\n]s", str); // fgets(str, 1000000, stdin); 안되네 
	
	for(i=0; str[i] != NULL; i++) {
		if(str[i] == ' ') { 
			space = true;
		}
		else if(space) { // 이전이 공백이라면 
			space = false; // false로  
			count++; // 단어 세기 
		}
	}
	
	printf("%d", count);
}
