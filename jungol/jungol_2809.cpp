#include <stdio.h>

int main(){
	int n, i, check=0;
	int arr[10000], cnt=0;
	scanf("%d", &n);
	
	for(i=1; i*i<=n; i++){
		if(n%i == 0){
			arr[cnt++] = i;
			if(n/i != i){
				arr[cnt++] = n/i;
			}
		}
	}
	i--;
	if(i*i == n){
		check = 1;
	}
	
	for(i=0; i<cnt; i+=2){
		printf("%d ", arr[i]);
	}
	
	if(check == 1){
		for(i=cnt-2; i>=1; i-=2){
			printf("%d ", arr[i]);
		}
	}
	else{
		for(i=cnt-1; i>=1; i-=2){
			printf("%d ", arr[i]);
		}	
	}
	
}
