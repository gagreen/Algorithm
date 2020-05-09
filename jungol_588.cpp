#include <stdio.h>

int printRec(int n){
	if(n <= 0){
		return 0;
	}
	printf("%d ", n);
	printRec(n-1);
}

int main(){
	int n;
	
	scanf("%d", &n);
	printRec(n);
}
