#include <stdio.h>

int main() {
	char word[1000001];
	int i;
	int cnt[26] = {0,}, tmp, max=0, index;
	bool isAlone = true;
	
	scanf("%s", word);
	
	for(i=0; word[i] != NULL; i++) {
		if(word[i] >= 97) { // �ҹ��ڶ�� -> �빮�ڷ� 
			word[i] = word[i] - 32;
		} 
		// printf("%c", word[i]);
		tmp = word[i] - 65; // �ƽ�Ű�ڵ尪 ���� 
		cnt[tmp]++; // ���ĺ� ��� 
	
	}
	
	for(i=0; i<26; i++) {
//		printf("%c: %d\n", i+65, cnt[i]);
		if(max == cnt[i]) { // ���� ���ٸ� 
//			printf("%c equal!\n", i+65);
			isAlone = false; // ȥ�ڰ� �ƴ� 
		}
		else if(max < cnt[i]) { // �ִ� ���ϱ� 
			max = cnt[i];
			index = i;
			isAlone = true; // �ʱ�ȭ? 
		}
		
	} 
	
	if(isAlone) {
		printf("%c", index+65);
	} else {
		printf("?");
	}
}
