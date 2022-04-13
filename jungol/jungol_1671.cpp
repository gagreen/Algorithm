#include <stdio.h>

int countForRound(int x, int y); 

int paper[101][101]={0,};

int main(){
	int loop, round=0, w, h, i, j, k;
	
	scanf("%d", &loop);
	for(i=0; i<loop; i++){
		scanf("%d %d", &w, &h);
		for(j=0; j<10; j++){
			for(k=0; k<10; k++){
				paper[h+j][w+k] = 1;
			}
		}
	}
	
	for(i=0; i<100; i++){
		for(j=0; j<100; j++){
			if(paper[i][j] == 1){
				round += countForRound(i, j);
			}
		}
	}
	
//	for(i=0; i<100; i++){ // 출력 테스트 
//		for(j=0; j<100; j++){
//			printf("%d ", paper[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
	
	printf("%d", round);
}

int countForRound(int x, int y){
	int cnt=0;
	if(paper[x-1][y] == 0){
		cnt++;
	}
	if(paper[x+1][y] == 0){
		cnt++;
	}
	if(paper[x][y-1] == 0){
		cnt++;
	}
	if(paper[x][y+1] == 0){
		cnt++;
	}
	
	return cnt;
}
