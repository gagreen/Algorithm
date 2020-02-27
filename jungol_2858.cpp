#include <stdio.h>

int main(){
	char data[100001];
	int i, cnt=0, total=0;
	
	scanf("%s", data);
	
	for(i=0; data[i]!=0; i++){
		if(data[i] == '('){
			if(data[i+1] == ')'){
				i++;
				total = total + cnt;
			}
			else{
				total++;
				cnt++;
			}
		}
		else if (data[i] == ')'){
			cnt--;
		}
//		printf("%d %d\n", total, cnt);
	}
	
	printf("%d", total);
	return 0;
}
