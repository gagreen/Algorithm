#include <stdio.h>

// 현재 배열에 두 번째 인자가 존재 
// ---- 한다면 그 숫자를
// ---- 아니라면 -1을 반환 
int existInArr(int *arr, int num, int size){ 
	int i;
	
	for(i=0; i<size; i++){
		if(arr[i] == num) {
			return -1;
		}
	}
	
	return num;
}

int main() {
	int n;
	int i, num, arr[1000], count=0;
	
	for(i=0; i<10; i++){
		scanf("%d", &num);
		
//		printf("%d %d %d\n", existInArr(arr, num%42, count), count, num%42);
		
		if(existInArr(arr, num%42, count) != -1) {
			arr[count++] = num%42;
		}
	}
	
	printf("%d", count);
}
