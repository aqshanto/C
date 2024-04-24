#include<stdio.h>

int main(){
    int fast,slow,dif,count=0,che=0;
    scanf("%d %d",&fast,&slow);
    dif=slow-fast;
    while (che<=slow){
        che+=dif;
        count++;
    }
    printf("%d\n",count);
    return 0;
}