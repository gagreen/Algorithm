#include <stdio.h>

int main() {
	int testCase;
	long long int x, y;
	long long int distance;
	long long int step, sum, count;
	
	scanf("%d", &testCase);
	
	while(testCase--) {
		scanf("%lld %lld", &x, &y);
		distance = y - x; // �Ÿ� ��� 
		step = 0;
		sum = 1;
		count = 1;
		
		while(distance > sum) {
			step++; // 1, 1, 2, 2, 3, 3ó�� �Ǵ���~
			
			count++;
			sum = sum + step;
			if(sum >= distance){
				break;
			}
			
			count++;
			sum = sum + step;
			if(sum >= distance){
				break;
			}
		}
		
		if(sum > distance) {
			count--;
		}
		
		printf("%d\n", count);
	}
}
