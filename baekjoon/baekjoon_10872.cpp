#include<stdio.h>

int factorial(int num) {
	if(num <= 1) {
		return 1;
	}
	
	return num * factorial(num-1);
}

int main() {
	int n;
	
	scanf("%d", &n);
	
	printf("%d", factorial(n));
}
