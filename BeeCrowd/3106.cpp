#include<stdio.h>

int main(){
    int test,num,sum=0;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        scanf("%d",&num);
        int reminder =num%3;
        sum+=(num-reminder);
    }
    printf("%d\n",sum);
    return 0;
}