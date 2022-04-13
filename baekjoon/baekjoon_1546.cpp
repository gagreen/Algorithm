#include<stdio.h>

int main() {
	int n;
	int scores[1000];
	int i, max=0;
	double sum=0, avg;
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++) {
		scanf("%d", &scores[i]);
		 
		if(max < scores[i]) { // 입력과 동시에 최댓값 찾기 
			max = scores[i];
		}
	}
//	printf("max: %d\n", max);
	
	for(i=0; i<n; i++) {
		sum += ((double)scores[i]/max)*100; // 평균 조작 공식(강제 형변환을 이용) 
//		printf("%f\t", ((double)scores[i]/max)*100);
	}
//	printf("\nsum: %f\n", sum);
	avg = sum/n;
	
	printf("%lf", avg);
}
