#include <stdio.h>

int main() {
	int n;
	int i;
	
	scanf("%d", &n);
	
	for(i=2; i<=n; i++) { // 에라토스테네스의 체가 가능 
		
		while(n%i == 0) { // 나눌 수 있을만큼 나누기 
			n /= i;  
			printf("%d\n", i);
		}
	}
}
