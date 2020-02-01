#include <stdio.h>
 
int main(){
    int i, x1, y1, x2, y2, change, h=0; 
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
     
    if(x1>y1){
        change = x1;
        x1 = y1;
        y1 = change;
    }
    if(x2>y2){
        change = x2;
        x2 = y2;
        y2 = change;    
    }
    if(x1>x2){
        change = x1;
        x1 = x2;
        x2 = change;
         
        change = y1;
        y1 = y2;
        y2 = change;
    }
//(x1<x2 && x2<y1) && (x1<y2 && y2<y1)
    if(x1<x2 && x2<y1 && y1<y2){
        printf("cross");
    }
    else{
        printf("not cross");
    }
}
