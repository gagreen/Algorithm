#include <stdio.h>
#include <stdlib.h>

char *balls;

int getMin(int min, int data){
	if(min > data){
		return data;
	}
	return min;
}

int getCnt(int start, char color){
	int cnt=0;
	if(start == 0){
		while(balls[start++] == color){
			cnt++;
		}
	}
	else{
		while(balls[start--] == color){
			cnt++;
		}
	}
	
	return cnt;
}

int main(){
	int n, i, j, tmp, cnt, min, cntR, cntB, check;

	scanf("%d", &n);
	min = n;
	balls = (char*) malloc (sizeof(char)*(n+1));
	scanf("%s", balls);
	// End of Input
	
	cntR = cntB = 0;
	for(i=0; i<n; i++){ // »ö±ò °è¼ö  
		if(balls[i] == 'R'){
			cntR++;
		}
		else{
			cntB++;
		}
	}
	
	min = getMin(min, cntR - getCnt(0,'R')); // ¿Þ R 
	min = getMin(min, cntB - getCnt(0,'B')); // ¿Þ B 
	min = getMin(min, cntR - getCnt(n-1,'R')); // ¿À¸¥ R 
	min = getMin(min, cntB - getCnt(n-1,'B')); // ¿À¸¥ B 
	// End of Operation
	
	printf("%d", min);
	
	free(balls);
	return 0;
}
