#include<stdio.h>

bool isPrime(int num){ // 매개변수 num이 소수인지 판별하는 함수 
	int i;
	if(num == 1) {
		return false;
	}
	for(i=2; i<=num/2; i++) {
		if(num%i == 0) {
			return false;
		}
	}
	
	return true;
}

int main() {
	int start, end;
	int min, sum, i;
	
	scanf("%d %d", &start, &end);
	min = end;
	sum = 0;
	
	for(i=start; i<=end; i++) {
		if(isPrime(i)) {
			if(sum == 0) {
				min = i;
			}
			sum += i;
		}
	}
	
	if(sum != 0){ // 소수가 하나라도 있는 경우 
		printf("%d\n%d", sum, min);	
	}
	else { // 소수가 아예 없을 경우 
		printf("-1");
	}
}
