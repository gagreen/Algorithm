#include <stdio.h>

int main() {
	int testCases;
	int repeat;
	char str[21];
	
	int i, j, cnt;
	
	
	scanf("%d", &testCases);
	
	while(testCases--) {
		char output[161] {0,};
		cnt = 0;
		
		scanf("%d %s", &repeat, str);
		
		for(i=0; str[i] != NULL; i++) {
			
			for(j=0; j<repeat; j++) {
				output[cnt++] = str[i];
			}
		}
		
		printf("%s\n", output);
		
	}
}
