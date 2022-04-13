#include <stdio.h>

int powForTwo(int n){
	if(n == 0){
		return 1;
	}
	return 2 * powForTwo(n-1);
}

int main(){
	int n;
	
	scanf("%d", &n);
	printf("%d", powForTwo(n));
	
	return 0;
}
