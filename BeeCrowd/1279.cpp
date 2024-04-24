#include<stdio.h>

int main(){
    int year,leap=0,hulu=0,bulu=0,ordi=0;
    while(scanf("%d",&year)!=EOF){
        int count=0;
        if(year<=2000){
            if(year%4==0){
                printf("This is leap year.\n");
                count=1;
            }if(year%15==0){
                printf("This is huluculu festival year.\n");
                count=1;
            }if(year%55==0){
                printf("This is bulukulu festival year.\n");
                count=1;
            }
            if(count==0){
                printf("This is an ordinary year.\n");
            }
        }
        else{
                printf("This is an ordinary year.\n");
        }
        printf("\n");
    }
    return 0;
}