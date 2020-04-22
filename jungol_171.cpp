#include <stdio.h>

int totalSum(int data){
	int i, sum=0;
	for(i=1; i<=data; i++){
		sum += i;
	}
	
	return sum;
}

int main(){
	int a;
	
	scanf("%d", &a);
	printf("%d", totalSum(a));
	
	return 0;
}
