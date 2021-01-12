#include <stdio.h>

int main() {
	int n, arr[1000];
	int i, j, temp;
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}
	
	/* 삽입정렬 */
	for(i=1; i<n; i++) { // 1부터 n까지 검사 
		j = i;
		temp = arr[j];
		while (--j >=0 && temp < arr[j]) { // i부터 (j가 0보다 크다 AND temp보다 클 때까지) 역순으로 반복 
			arr[j+1] = arr[j]; // 뒷 칸으로 밀기 
			arr[j] = temp; // 자리 만들 
		}
//		for(j=0; j<n; j++) {
//			printf("%d ",arr[j]);
//		}
	}
	
	for(i=0; i<n; i++) {
		printf("%d\n",arr[i]);
	}
}
