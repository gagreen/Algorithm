#include <stdio.h>

bool isPrime(int num) {
	int i;
	
	if(num == 1) { // 1�� �Ҽ��� �ƴϴ�. 
		return false;
	}
	
	for(i=2; i<=num/2; i++) {
		if(num%i == 0) { // 1 Ȥ�� �ڽſ��� ���������ٸ� 
			return false; // �Ҽ��� �ƴϴ�. 
		}
	}
	
	return true;
}

int main() {
	int n, arr[100];
	int i, count=0;
	
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		scanf("%d", &arr[i]);
		if(isPrime(arr[i])) {
			count++;
		}
	}
	
	printf("%d", count);
}
