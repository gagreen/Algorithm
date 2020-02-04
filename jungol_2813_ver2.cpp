#include <stdio.h>

int prime[2000001];

void sieve(int n);

int main(){
	int m, n, i;
	int count=0;
	scanf("%d %d", &m, &n);
	
	sieve(n);
	
	for(i=m; i<=n; i++){
		if(!prime[i]){
			count++;
		}
	}
	printf("%d", count);
}

void sieve(int n){
	int i, j;
	
	prime[1] = 1;
	
	for(i=2; i*i<=n; i++){
		if(prime[i] == 0){
			for(j=i*i; j<=n; j+=i){
				prime[j] = 1;
			}
		}
	}
}
