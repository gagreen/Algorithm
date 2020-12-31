#include<stdio.h>
#include<string.h>
 
int isInThere(char c, char *str) { // 문자열 중에 단어가 포함되어 있는가
    int i;
    for(i=0; str[i] != NULL; i++) {
        if(str[i] == c) {
            return 1;
        }
    }
 
    return 0;
}
 
int main (){
    int n;
    char input[100][101];
    int i, j, count=0, indexForSave=0, isGroup=1;
    char save[27];
 
    // 입력 시작
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%s", input[i]);
    }
    // 입력 끝
 
    // 처리 시작
    for(i=0; i<n ;i++) {
        isGroup = 1;
        indexForSave = 0;
        for(j=0; j<27; j++){
            save[j] = 0;
        }
 
        for(j=0; input[i][j] != NULL; j++) {
            if(isInThere(input[i][j], save)){ // 지금까지 나온 적 있다면
//            	printf("%c\t", input[i][j]);
                if(input[i][j-1] != input[i][j]) {
//                	printf("stop at %d+1\t", j);
//                	printf("%c and %c \t", input[i][j-1], input[i][j]);
                    isGroup = 0;
                    break;
                }
            } else {
                save[indexForSave++] = input[i][j]; // 지금까지 나온 적 없는 문자라면
            }
        }
//        printf("%d: %d, until: %s\n", i, isGroup, save);
        if(isGroup) {
            count++;
        }
    }
    // 처리 끝
 
    printf("%d", count);
}
