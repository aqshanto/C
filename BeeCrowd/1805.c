#include<stdio.h>

int main(){
    long long int A,B,sum1, sum2;
    scanf("%lld %lld", &A ,&B);
    sum1 = (A*(A+1))/2;
    sum2 = (B*(B+1))/2;
    printf("%lld\n",sum2-sum1+A);
    return 0;
}