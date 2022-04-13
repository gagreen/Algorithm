#include <stdio.h>

void printRect(int n){
	int i, j, tmp=1;
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d ", tmp++);
		}
		printf("\n");
	}
}

int main(){
	int input;
	
	scanf("%d", &input);
	printRect(input);
	
	return 0;
}
