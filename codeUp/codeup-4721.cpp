#include <stdio.h>
 
int main(){
    int i, n, input[3], max=0, index, output;
    int  a[3]={0,}, countThree[3]={0,}, countTwo[3]={0,}; 
    scanf("%d", &n);
    while(n>0){
        for(i=0; i<3; i++){
            scanf("%d", &input[i]);
            a[i] += input[i];
            if(input[i] == 3){
                countThree[i]++;
            }
            else if(input[i] == 2){
                countTwo[i]++;
            }
        }
        n--;
    }
    for(i=0; i<3; i++){
        if(max<a[i]){
            max = a[i];
            index = i;
            output = index+1;
        }
        else if(max == a[i]){
            if(countThree[index] < countThree[i]){
                max = a[i];
                index = i;
                output = index+1;
            }
            else if(countThree[index] == countThree[i] && countTwo[index] < countTwo[i]){
                max = a[i];
                index = i;
                output = index+1;
            }
            else if(countThree[index] == countThree[i] && countTwo[index] == countTwo[i]){
                max = a[i];
                index = i;
                output = 0;
            }
        }
    }
    printf("%d %d", output, max);
}
