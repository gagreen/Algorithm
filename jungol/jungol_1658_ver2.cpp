#include <stdio.h>

int getGcd(int a, int b);

int main(){
	int a, b, gcd, lcm;
	
	scanf("%d %d", &a, &b);
	
	gcd = getGcd(a, b);
	lcm = a*b/gcd;
	
	printf("%d\n%d", gcd, lcm);
}

int getGcd(int a, int b){
	if(a%b == 0){
		return b;
	}
	else{
		return getGcd(b, a%b);
	}
}
