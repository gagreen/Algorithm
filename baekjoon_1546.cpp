#include<stdio.h>

int main() {
	int n;
	int scores[1000];
	int i, max=0;
	double sum=0, avg;
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++) {
		scanf("%d", &scores[i]);
		 
		if(max < scores[i]) { // �Է°� ���ÿ� �ִ� ã�� 
			max = scores[i];
		}
	}
//	printf("max: %d\n", max);
	
	for(i=0; i<n; i++) {
		sum += ((double)scores[i]/max)*100; // ��� ���� ����(���� ����ȯ�� �̿�) 
//		printf("%f\t", ((double)scores[i]/max)*100);
	}
//	printf("\nsum: %f\n", sum);
	avg = sum/n;
	
	printf("%lf", avg);
}
