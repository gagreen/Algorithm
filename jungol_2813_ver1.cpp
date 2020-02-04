#include <stdio.h>

int primeCheck(int a);

int main(){
	int m, n, i;
	int count = 0;
	
	scanf("%d %d", &m, &n);
	
	for(i=m; i<=n; i++){
		if(primeCheck(i)){
			count++;
		}	
	}
	
	printf("%d", count);
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
