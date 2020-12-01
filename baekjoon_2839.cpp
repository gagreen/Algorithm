#include<stdio.h>

int main() {
	int weight;
	int count = 0;
	
	scanf("%d", &weight);
	
	/* 3kg씩 뺴면서 5kg로 나눌 수 있는가를 확인 */
	while(weight > 0) {
		
		if(weight % 5 == 0) { // 무게가 5의 배수면 바로 break 및 나누기 
			count += weight/5;
			break;
		}
		else if(weight < 3) { // 3kg보다 작다면 불가능함 
			count = -1; // 불가능 표시 
			break;
		}
		
		weight -= 3;
		count++;
	}
	
	printf("%d", count);
	
	return 0;
}
