#include <stdio.h>

char color[5];
int number[5];
int line_num[4][2]={0};

int colorCheck();
int numberCheck();
void sameCheck();

int main(){
	int i, color_count, number_count;

	
	for(i=0; i<5; i++){
		scanf(" %c %d", &color[i], &number[i]);
	}
	
	color_count = colorCheck();
	number_count = numberCheck();
	
	if(color_count == 5 && number_count == 5){ // 색이 모두 같고 숫자 연속적 
		printf("%d", number[4] + 900);
	}
	else if(color_count == 5){ // 색이 모두  같음 
		printf("%d", number[4] + 600);
	}
	else if(number_count == 5){
		printf("%d", number[4] + 500);
	}
	else{
		sameCheck();
		
		if(line_num[0][1] == 4){
			printf("%d", line_num[0][0] + 800);
		}
		else if(line_num[0][1] == 3){
			if(line_num[1][1] == 2){
				printf("%d", (line_num[0][0]*10) + line_num[1][0] + 700);
			}
			else{
				printf("%d", line_num[0][0] + 400);
			}
		}
		else if(line_num[0][1] == 2){
			if(line_num[1][1] == 2){
				printf("%d", (line_num[1][0]*10) + line_num[0][0] + 300);
			}
			else{
				printf("%d", line_num[0][0] + 200);
			}
		}
		else{
			printf("%d", number[4] + 100);
		}
	}
	
	return 0;
}

int colorCheck(){
	int i, count = 1;
	for(i=1; i<5; i++){
		if(color[0] != color[i]){
			break;
		}
		count++;
	}
	return count;
}

int numberCheck(){ 
	int i, j, tmpC, tmpN, count=1;
	for(i=0; i<4; i++){ // 크기순 정렬 Asc 
		for(j=i+1; j<5; j++){
			if(number[i] > number[j]){
				tmpC = color[i];
				color[i] = color[j];
				color[j] = tmpC;
				
				tmpN = number[i];
				number[i] = number[j];
				number[j] = tmpN;
			}
		}
	}
	
	for(i=0; i<4; i++){ // 연속적인지 체크 
		if(number[i]+1 != number[i+1]){
			break;
		}
		count++;
	}
	
	return count;
}

void sameCheck(){
	int i, j, index=0, tmp;
	
	for(i=0; i<5; ){
		line_num[index][0] = number[i];
		line_num[index][1] = 1;
		for(j=i+1; j<5; j++){
			if(number[i] == number[j]){
				line_num[index][1]++;
			}
			else{
				i = j;
				index++;
				break;
			}
		}
		
		if(index>3 || j>4){
			break;
		}
	}
	
	for(i=0; i<3; i++){ // 정렬 [1] desc 
		for(j=i+1; j<4; j++){
			if(line_num[i][1]<line_num[j][1])
            {
                tmp = line_num[i][0];
                line_num[i][0] = line_num[j][0];
                line_num[j][0] = tmp;
 
                tmp = line_num[i][1];
                line_num[i][1] = line_num[j][1];
                line_num[j][1] = tmp;
            }
		}
	}
}
