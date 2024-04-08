#include<stdio.h>

int main(){
    long long int x,sum=0;
    scanf("%lld",&x);
    for(int i=1;i<=x;i++){
        sum+=i;
    }
    printf("%lld\n",sum);
    return 0;
}