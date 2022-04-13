#include <stdio.h>

int main(){
	int k, i, wMax=0, hMax=0, sum=0;
	int vec[6][2], size[7];// 1:µ¿, 2:¼­, 3:³², 4:ºÏ 
	
	scanf("%d", &k);
	for(i=0; i<6; i++){
		scanf("%d %d", &vec[i][0], &vec[i][1]);
		if(vec[i][0] == 1 || vec[i][0] == 2){
			if(vec[i][1] > wMax){
				wMax = vec[i][1];
			}
		}
		else{
			if(vec[i][1] > hMax){
				hMax = vec[i][1];
			}
		}
	}
	
	for(i=0; i<5; i++){
		sum += vec[i][1] * vec[i+1][1];
	}
	
	sum += vec[0][1] * vec[5][1];
	sum -= (wMax*hMax)*2;
		
	printf("%d", sum*k);
	
	return 0;
}
