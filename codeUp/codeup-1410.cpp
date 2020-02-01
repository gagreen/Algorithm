#include <stdio.h>
 
int main(){
    char s[100001];
    int i, count[2]={0,};
    scanf("%s", s);
     for(i=0; s[i]!=NULL; i++){
        if(s[i]==40 ){
            count[0]++;
        }
        else if(s[i]==41){
            count[1]++;
        }
    }
    printf("%d %d", count[0], count[1]);
}
