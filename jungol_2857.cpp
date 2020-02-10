#include <stdio.h>
#include <string.h>

int main(){
	char data[5][16] = {0};
	int i, j, cnt=0, max=0;
	
	for(i=0; i<5; i++){
		scanf("%s", data[i]);
		if(strlen(data[i]) > max){
			max = strlen(data[i]);
		}
	}
	
	for(i=0; i<max; i++){
		for(j=0; j<5; j++){
			if(data[j][i] == NULL){
				continue;
			}
			printf("%c", data[j][i]);
		}
	}
	return 0;
}
