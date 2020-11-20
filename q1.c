#include <stdio.h>


int main(){

    int x1,y1,x2,y2,x3,y3,x4,y4;

//input nodes
    scanf("%d %d",&x1,&y1);
    scanf("%d %d",&x2,&y2);
    scanf("%d %d",&x3,&y3);
//calculate 4th node
    if(x1==x2){
        if(y1==y3){
            x4=x2+x3-x1;
            y4=y2+y3-y1;
        }
        else{
            x4=x1+x3-x2;
            y4=y1+y3-y2;            
        }

    }
    if(x1==x3){
        if(y1==y2){
            x4=x2+x3-x1;
            y4=y2+y3-y1;
        }
        else{
            x4=x1+x2-x3;
            y4=y1+y2-y3;            
        }
    }
//print result
    printf("%d %d",x4,y4);



    return 0;
}