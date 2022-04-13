#include <stdio.h>
#define S 1
#define E 3

int main(){
	int i, j;
	
	for(i=S; i<=E; i++){
		for(j=S; j<=E; j++){
			printf("%d + %d = %d\n", i, j, i+j);
		}
	}
}
