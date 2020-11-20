#include <stdio.h>



int main(){

    int x,x1,x5,x10,x25;
    scanf("%d",&x);
    x=1000-x;

    if((x-x%25)>25){
    
        x25=(x-x%25)/25;
    }
    else{
        x25=0;
    }

    if((x-x25*25)>10){
    
        x10=(x-x25*25)/(x-x25*25)%10;
    }
    else{
        x10=0;
    }
    
    

    if((x-x25*25-x10*10)>5){
    
        x5=(x-x25*25-x10*10)/(x-x25*25-x10*10)%5;
    }
    else{
        x5=0;
    }


    if(x-x25*25-x10*10-x5*5>1){
    
        x1=x-x25*25-x10*10-x5*5;
    }
    else{
        x1=0;
    }
    printf("%d*(25),%d*(10),%d*(5),%d*(1)",x25,x10,x5,x1);
    return 0;
}