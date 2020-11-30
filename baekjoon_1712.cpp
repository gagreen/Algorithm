#include<stdio.h>

int main() {
	int a, b, c;
	int i, count = 0;;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if(b >= c) { // 이익보다 가변 비용이 많거나 같을 때 
		printf("-1");
		return 0;
	}
	
	// (c - b): 실제 이익 
	
	count = (a / (c - b)) + 1;
	
	printf("%d", count);
	
	return 0;
}
