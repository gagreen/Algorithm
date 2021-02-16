#include <stdio.h>
#include <math.h>


int main() {
	int testCase;
	int x1, x2, y1, y2, r1, r2; 
	double d;
	
	scanf("%d", &testCase);
	
	while(testCase--) {
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
	
		// 피타고라스의 정리를 통한 두 점 사이의 거리 구하기 
		d = sqrt(pow(x1-x2, 2) + pow(y1 - y2, 2));
		
		if(r1+r2 < d) {
			printf("0\n");
		} 
		else if(abs(r1-r2) > d) {
			printf("0\n");
		}
		else if(d==0 && r1 == r2) {
			printf("-1\n");
		}
		else if(d == (r1+r2)) {
			printf("1\n");
		}
		else if(d == abs(r1-r2)) {
			printf("1\n");
		}
		else{
			printf("2\n");
		}
	}
}

// 참고: https://mjeong9316.tistory.com/157 
