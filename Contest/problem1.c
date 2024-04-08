#include<stdio.h>

int main(){
    long long int num,sum;
    scanf("%lld",&num);
    sum=((num*(num+1))/2)-(num-1);
    printf("%lld\n",sum);
    return 0;
}