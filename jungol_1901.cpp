#include <stdio.h>
#include <stdlib.h>

int primeCheck(int a);
void nearPrime(int data);

int main(){
	int n, i;
	int  *arr;
	
	scanf("%d", &n);
	arr = (int*) malloc(sizeof(int)*n);
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	
	for(i=0; i<n; i++){
		nearPrime(arr[i]);
	}
	
	
	return 0;
}


int primeCheck(int a){
	int i;
	if(a == 1){
		return 0;
	}
	for(i=2; i*i<=a; i++){
		if(a%i == 0){
			return 0;
		}
	}
	return 1;
}

void nearPrime(int data){
	int i, less = -1, bigger = -1;
	for(i=data; i<1000000; i++){
		if(primeCheck(i)){
			bigger = i;
			break;
		}
	}
	
	for(i=data; i>1; i--){
		if(primeCheck(i)){
			less = i;
			break;
		}
	}
	
	if(bigger-data == data-less && bigger != less){
		printf("%d %d\n", less, bigger);
	}
	else if(bigger-data > data-less){
		printf("%d\n", less);
	}
	else{
		printf("%d\n", bigger);
	}
}
