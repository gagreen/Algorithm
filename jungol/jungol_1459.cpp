#include <stdio.h>

int num[101] = {0,}; // 입력  
int output[101] = {0,}; // 출력 
int visit[101] = {0,}; // 방문 체크 
int size = 0;

void number(int a, int check);


int main(){
	int n, i;
	
	scanf("%d", &n); // 입력 
	for(i=1; i<=n; i++){ 
		scanf("%d", &num[i]);
	}
	
	for(i=1; i<=n; i++){ // 처리 
		number(num[i], i);
	}
	
	printf("%d\n", size); // 출력 
	for(i=1; i<=size; i++){
		printf("%d\n", output[i]);
	}
	return 0;
}

void number(int a, int check){
	if(visit[a] == 1){
		return;
	}
	visit[a] = 1;
	
	if(check == num[a]){
		size++;
		output[size] = check;
	}
	else{
		number(num[a], check);
	}
	
	visit[a] = 0;
	return;
}
