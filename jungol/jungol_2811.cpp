#include <stdio.h>
int arr[5];
int n = 5;

int  primeCheck(int a);

int main(){
	int i;
	char* output;
	
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	
	for(i=0; i<n; i++){
		switch (primeCheck(arr[i])){
			case -1:
				printf("number one\n");
				break;
			case 0:
				printf("composite number\n");
				break;
			case 1:
				printf("prime number\n");
				break;
		}
	}
}

int primeCheck(int a){
	int i, check = 1;
	
	if(a == 1){
		return -1;
	}
	
	for(i=2; i*i<=a; i++){
		if(a%i == 0){
			check = 0;
			break;
		}
	}
	return check;
}
