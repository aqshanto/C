#include<stdio.h>

int main(){
    int car,num,sum=0;
    scanf("%d",&car);
    for(int i=0;i<car;i++){
        scanf("%d",&num);
        sum+=num;
    }
    //printf("%d",sum);
    if(sum%5==0){
        printf("%d\n",sum/5);
    }else{
        printf("%d\n",(sum/5)+1);
    }
    return 0;
}