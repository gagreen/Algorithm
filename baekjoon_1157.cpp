#include <stdio.h>

int main() {
	char word[1000001];
	int i;
	int cnt[26] = {0,}, tmp, max=0, index;
	bool isAlone = true;
	
	scanf("%s", word);
	
	for(i=0; word[i] != NULL; i++) {
		if(word[i] >= 97) { // 소문자라면 -> 대문자로 
			word[i] = word[i] - 32;
		} 
		// printf("%c", word[i]);
		tmp = word[i] - 65; // 아스키코드값 빼기 
		cnt[tmp]++; // 알파벳 계수 
	
	}
	
	for(i=0; i<26; i++) {
//		printf("%c: %d\n", i+65, cnt[i]);
		if(max == cnt[i]) { // 값이 같다면 
//			printf("%c equal!\n", i+65);
			isAlone = false; // 혼자가 아님 
		}
		else if(max < cnt[i]) { // 최댓값 구하기 
			max = cnt[i];
			index = i;
			isAlone = true; // 초기화? 
		}
		
	} 
	
	if(isAlone) {
		printf("%c", index+65);
	} else {
		printf("?");
	}
}
