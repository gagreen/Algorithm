#include <stdio.h>

void print(int n, int *arr){
	int i;
	for(i=1; i<=n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void dice(int level, int n, int *arr){
	int i;
	
	if(level > n){
		print(n, arr);
		return;
	}
	
	for(i=arr[level-1]; i<=6; i++){
		arr[level] = i;
		dice(level+1, n, arr);
	}
}

int main(){
	int n, arr[11]={1,0,};
	 
	scanf("%d", &n);
	dice(1, n, arr);
	return 0;
}
