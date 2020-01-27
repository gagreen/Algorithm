#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, m, i, sumDiv = 0, sumMul = 0;
	int *arr;
	
	scanf("%d", &n); // 배열 크기 입력 
	arr = (int*)malloc(sizeof(int)*n);	
	for(i=0; i<n; i++){ // 약수, 배수 데이터 입력 
		scanf("%d", &arr[i]);
	}
	scanf("%d", &m); // 구할 정수 입력 
	
	for(i=0; i<n; i++){
		if(m%arr[i] == 0){
			sumDiv += arr[i];
		}
		if(arr[i]%m == 0){
			sumMul += arr[i];
		}
	}
	
	printf("%d\n%d", sumDiv, sumMul);
	
	free(arr);
	return 0;
}
