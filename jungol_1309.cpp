#include <stdio.h>

long long int fac(long long int n){
	if(n == 1){
		printf("%lld! = %lld\n", n, n);
		return 1;
	}
	printf("%lld! = %lld * %lld!\n", n, n, n-1);
	return n * fac(n-1);
}

int main(){
	int n;
	long long int ans;
	scanf("%d", &n);
	
	ans = fac(n);
	printf("%lld", ans);
	
	return 0;
}
