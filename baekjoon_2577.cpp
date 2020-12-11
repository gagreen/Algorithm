#include <stdio.h>

int main() {
	int a, b, c;
	int nums[10] = {0,}; // Initialize: 0~9를 0으로 초기화 
	int multiplied, i; // 곱한 값 저장 
	
	scanf("%d %d %d", &a, &b, &c);
	
	multiplied = a * b * c;
	
	while(multiplied > 0) { // 곱한 값이 0보다 크다면 
//		printf("%d\t", multiplied%10);
		nums[multiplied%10]++; // 현재 값의 일의 자리 구하기 
		multiplied /= 10; // 나누기 10 == 현재 일의 자리 제거 
	}
//	printf("\n");
	
	for(i=0; i<10; i++) {
		printf("%d\n", nums[i]);
	}
}
