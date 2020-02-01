#include <stdio.h>

int primeCheck(int a);

int main(){
	int m, n, i;
	int sum, min;
	
	scanf("%d %d", &m, &n);
	sum = 0;
	min = n;
	
	for(i=m; i<=n; i++){
		if(primeCheck(i)){
			sum += i;
			min = min > i ? i : min;
		}
	}
	
	if(sum == 0){
		printf("-1");
	}
	else {
		printf("%d\n%d", sum, min);
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
