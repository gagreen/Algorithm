#include <stdio.h>

int main() {
	int testCase;
	int size, scores[1000], sum, count;
	double avg;
	int i;
	
	scanf("%d", &testCase);
	
	while(testCase--) {
		scanf("%d", &size);
		sum = 0;	// 변수 초기화 
		count = 0;
		
		for(i=0; i<size; i++) { // 학생들의 성적 받기 
			scanf("%d", &scores[i]);
			sum += scores[i]; // 평균을 위한 합 
		}
		avg = ((double)sum)/size; // 평균 구하기 
		
		for(i=0; i<size; i++) {
			if(avg < scores[i]) { // 평균보다 높은 학생 계수 
				count++;
			}
		}
//		printf("avg: %d\t count: %d\n", avg, count);
		printf("%.3f%%\n", ((double)count)/size*100.0); // 비율 구하기 
	}
}
