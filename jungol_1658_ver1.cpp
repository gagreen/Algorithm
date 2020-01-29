#include <stdio.h>

int getGcd(int a, int b);
int getLcm(int a, int b, int gcd);

int main(){
	int a, b, gcd, lcm;
	
	scanf("%d %d", &a, &b);
	
	gcd = getGcd(a, b);
	lcm = getLcm(a, b, gcd);
	
	printf("%d\n%d", gcd, lcm);
}

int getGcd(int a, int b){
	int i, ouput=1;
	int length = a < b ? a : b;
	for(i=2; i<=length; i++){
		if(a%i==0 && b%i==0){
			ouput = i;
		}
	}
	
	return ouput;
}

int getLcm(int a, int b, int gcd){	
	return a*b / gcd;
}
