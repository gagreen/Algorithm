#include <stdio.h>

void hanoi(int n, int now, int want, int pass);
 // now : ÇöÀç ±âµÕ, want : °¡¾ßÇÒ ±âµÕ, pass : °æÀ¯ ±âµÕ 
int main(){
	int n;
	
	scanf("%d", &n);
	
	hanoi(n, 1, 3, 2);
}

void hanoi(int n, int now, int want, int pass){
	if(n == 1){
		printf("%d : %d -> %d\n", n, now, want);
		return;
	}
	
	hanoi(n-1, now, pass, want);
	printf("%d : %d -> %d\n", n, now, want);
	hanoi(n-1, pass, want, now);
}
