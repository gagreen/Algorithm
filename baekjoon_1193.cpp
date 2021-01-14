#include <stdio.h>

int main() {
	int ord; // 입력값 
	int sum = 2; // 양 변을 더한 수를 비교할 값 
	int flag = 1; // i에 더할 값 
	int i=0;
	
	
	scanf("%d", &ord);
	
	while(ord--) {
		i += flag;
				
		if(i == sum || i == 0) { // 최댓값까지 왔다면 
//			printf("'met %d'", i);
			if(i == 0) {
				i = 1;
			}
			flag *= -1;
			
			sum++;
		}
		
//		printf("%d/%d\n", sum-i, i);
	}
	
	printf("%d/%d", sum-i, i);
}
