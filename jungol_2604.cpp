#include <stdio.h>

int main(){
	int height = 0, i;
	char cur = ' ';
	char input[50];
	
	scanf("%s", input);
	
	for(i=0; input[i] != 0; i++){
		if(input[i] != cur){
			height += 10;
			cur = input[i];
		}
		else {
			height += 5;
		}
	}
	
	printf("%d", height);
}
