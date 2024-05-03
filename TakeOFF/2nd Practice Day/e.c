#include<stdio.h>

int main(){
    long long int n;
    scanf("%lld",&n);
    long long int count=0;
    while(n!=1){
        count++;
        count*=2;
        n/=2;

    }
    printf("%lld\n",count+1);
    return 0;
}