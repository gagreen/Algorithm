#include <stdio.h>

void recPrint(int n){
	if(n <= 0){
		return;
	}
	
	recPrint(n/2);
	printf("%d ", n);
	return;
}

int main(){
	int n;
	
	scanf("%d", &n);
	recPrint(n);
	
	return 0;
}
