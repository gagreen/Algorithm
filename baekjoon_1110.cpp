#include <stdio.h>

int makeNew(int num) {
	int first, second;
	first = (num%10);
	second = ((num/10) + (num%10));
	
	if(second >= 10) { // 두번째 숫자가 10을 넘는다면 
		second = second%10; // 일의 자리만 취하기 
	}
//	printf("%d %d\n", first, second);
	return first*10 + second;
}

int main() {
	int n;
	int count=1, result = -1; // N은 -1이 입력될 일이 없으므로 기본값을 -1로 
	
	scanf("%d", &n);
	result = makeNew(n);
	
	while(result != n) { // 입력값이 결과값이 될 때가지 
		result = makeNew(result);
		count++; 
	}
	
	printf("%d", count);
}
