#include<stdio.h>

void judDay(int mon, int day){
	int monList[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if(monList[mon - 1] >= day && day > 0){
		printf("OK!");
	}
	else{
		printf("BAD!");
	}
}

int main(){
	int mon, day;
	
	scanf("%d %d", &mon, &day);
	judDay(mon, day);
	
	return 0;
}
