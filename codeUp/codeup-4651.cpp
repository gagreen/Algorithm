#include<stdio.h>
#include<stdlib.h>
  
int main(){
int a[3][5], i, j;
   
for(i=0; i<3; i++){
for(j=0; j<4; j++){
scanf("%d", &a[i][j]);
}
   
}
   
for(i=0; i<3; i++){
a[i][4] = 0;
for(j=0; j<4; j++){
if(a[i][j] == 1){
a[i][4]++;
}
} 
}
   
for(i=0; i<3; i++){
switch(a[i][4]){
case 0 :
printf("D\n");
break;
case 1 :
printf("C\n");
break;
case 2 :
printf("B\n");
break;
case 3 :
printf("A\n");
break;
case 4 :
printf("E\n");
break;
}
} 
return 0; 
}
