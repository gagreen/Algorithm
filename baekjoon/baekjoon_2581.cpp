#include<stdio.h>

bool isPrime(int num){ // �Ű����� num�� �Ҽ����� �Ǻ��ϴ� �Լ� 
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
	
	if(sum != 0){ // �Ҽ��� �ϳ��� �ִ� ��� 
		printf("%d\n%d", sum, min);	
	}
	else { // �Ҽ��� �ƿ� ���� ��� 
		printf("-1");
	}
}
