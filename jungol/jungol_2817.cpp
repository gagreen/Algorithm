#include <stdio.h>

int n;
int data[13];
int num[6];

int lotto(int cur, int len);

int main(){
	int i;
	
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &data[i]);
	}
	
	lotto(0, 0);
	
	return 0;
}

int lotto(int cur, int len){
	int i, j;

	if(len == 6){
		for(j=0; j<6; j++){
			printf("%d ", num[j]);
		}
		printf("\n");
		return 0;
	}
	
	for(i=cur; i<n; i++){
		num[len] = data[i];
		lotto(i+1, len+1);
	}
	
	return 0;
}
