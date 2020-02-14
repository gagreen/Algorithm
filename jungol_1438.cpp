#include <stdio.h>

int main(){
	int paper[100][100]={0,};
	int loop, w, h, i, j, k, area=0;
		
	scanf("%d", &loop);
	for(i=0; i<loop; i++){
		scanf("%d %d", &w, &h);
		for(j=0; j<10; j++){
			for(k=0; k<10; k++){
				paper[w+j][h+k] = 1;
			}
		}
	}
	
	for(i=0; i<100; i++){
		for(j=0; j<100; j++){
			area += paper[i][j];
		}
	}
	printf("%d", area);
}
