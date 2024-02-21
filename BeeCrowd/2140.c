#include<stdio.h>
int main(){
    int buy,paid;
    while (buy!=0 && paid !=0){
        scanf("%d %d",&buy,&paid);
        if(buy==0 && paid ==0){
            break;
        }
        int back = paid-buy;
        int n100=0,n50=0,n20=0,n10=0,n5=0,n2=0,extra;
        n100 = back/100;
        extra = back%100;
        n50 = extra/50;
        extra = extra%50;
        n20 = extra /20;
        extra = extra % 20;
        n10 = extra /10;
        extra = extra %10;
        n5= extra /5;
        extra = extra%5;
        n2 = extra /2;

        int total = n100+n10+n2+n20+n5+n50;
        if(total==2){
            printf("possible\n");
        }else{
            printf("impossible\n");
        }
    }
    
    
    return 0;
}