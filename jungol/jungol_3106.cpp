#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int a, b;
	long long i, j;
	char n[1000000];
	
	while(1){
		scanf("%d", &a);
		if(a == 0){
			break;
		}
		scanf("%s %d", &n, &b); // �Է�
		
		if(n[0] == '0'){
			printf("0 \n");
			continue;
		}
		
		long long demical = 0;
		char output[1000];
		// x������ 10������ 
	
		for(i=strlen(n)-1, j=1; i>=0; i--, j*=a){
			if(n[i] >= 'A'){
				demical += (n[i] - 'A' + 10) * j;
			}
			else {
				demical += (n[i] - '0') * j;
			}
		}
		// 10������ x������ 		
		for(i=0; demical>0; demical/=b, i++){
			if(demical%b >= 10){
				output[i] = (demical%b) + 'A' - 10;
			}
			else {
				output[i] = (demical%b) + '0';
			}
		}
		
		 for(i = i-1;i >= 0;i--){
            printf("%c", output[i]);
        }
        printf("\n");
			
	}
	return 0;
}

