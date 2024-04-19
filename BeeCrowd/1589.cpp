#include<stdio.h>

int main(){
    int test;
    scanf("%d",&test);
    long long int a,b;
    for(int i=0;i<test;i++){
        scanf("%lld %lld",&a,&b);
        long long int sum=a+b;
        printf("%lld\n",sum);
    }
    return 0;
}