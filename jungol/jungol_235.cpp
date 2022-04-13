#include <stdio.h>

int recDiv(int n, int level){
	if(n == 1){
		return level;
	}
	
	if(n%2 == 0){
		return recDiv(n/2, level+1);
	}
	else{
		return recDiv(n/3, level+1);
	}
}

int main(){
	int n;
	
	scanf("%d", &n);
	printf("%d", recDiv(n, 0));
	
	return 0;
}
