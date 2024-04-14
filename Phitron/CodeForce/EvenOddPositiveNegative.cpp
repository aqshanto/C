//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C
#include<stdio.h>

int main(){
    int test,num,even=0,odd=0,positive=0,negative=0;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        scanf("%d",&num);
        if(num<0){
            negative++;
        }
        if(num>0){
            positive++;
        }
        if(num%2==0){
            even++;
        }
        if(num%2!=0){
            odd++;
        }
    }
    printf("Even: %d\n",even);
    printf("Odd: %d\n",odd);
    printf("Positive: %d\n",positive);
    printf("Negative: %d\n",negative);
    return 0;
}