#include <stdio.h>

int pow(int base, int exp){
	if(exp < 1){
		return 1;
	}
	return base * pow(base, exp-1); 
}

int main(){
	int n, m;
	
	scanf("%d %d", &n, &m);
	printf("%d", pow(n, m));
	
	return 0;
}
