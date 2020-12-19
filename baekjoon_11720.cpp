#include <stdio.h>

int main() {
	int n;
	char str[101];
	int sum = 0, i;
	
	scanf("%d", &n);
	scanf("%s", str);
	
	for(i=0; i<n; i++) {
		sum += (str[i] - '0'); // 문자열이므로 '0'의 아스키코드 값을 뺴준다. 
	}
	
	printf("%d", sum); 
}
