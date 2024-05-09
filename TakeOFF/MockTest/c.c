#include <stdio.h>
int main(){
    long long int n;
    scanf("%lld",&n);
    long long int sum=0;
    sum=(n*(n+1))/2;
    printf("%lld\n",sum-n);
}