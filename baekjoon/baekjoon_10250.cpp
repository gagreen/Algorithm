#include <stdio.h>

int main() {
	int testCase, height, weight, n;
	int ceung, ho;
	
	scanf("%d", &testCase);
	
	while(testCase--) {
		scanf("%d %d %d", &height, &weight, &n);
		
		if(n%height == 0) {
			ho = n / height;
			ceung = height;
		}
		else {
			ho = (n / height) + 1;
			ceung = n%height;
		}
		
		
		printf("%d%02d\n", ceung, ho);
	}
}
