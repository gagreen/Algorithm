#include <stdio.h>

int num[101] = {0,}; // �Է�  
int output[101] = {0,}; // ��� 
int visit[101] = {0,}; // �湮 üũ 
int size = 0;

void number(int a, int check);


int main(){
	int n, i;
	
	scanf("%d", &n); // �Է� 
	for(i=1; i<=n; i++){ 
		scanf("%d", &num[i]);
	}
	
	for(i=1; i<=n; i++){ // ó�� 
		number(num[i], i);
	}
	
	printf("%d\n", size); // ��� 
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
