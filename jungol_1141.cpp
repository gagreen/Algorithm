#include <stdio.h>

int main(){
	int n, i, j, tmp, top=0;
	int arr[80000];
	long int sum = 0;
	
	scanf("%d", &n);
		for(i=0; i<n; i++){
		scanf("%d", &tmp);
		
		while(top>0 && arr[top-1] <= tmp){
			top--;
		}
		sum += top;
		arr[top++] = tmp;
	}
	
	printf("%ld", sum);
	return 0;
}
