#include<stdio.h>

int main(){
    long long int testCase,num,Fib[60];
    scanf("%lld",&testCase);
    for(int i=0;i<testCase;i++){
        scanf("%lld",&num);
        Fib[0]=0;
        Fib[1]=1;
        for(int i=2;i<=num;i++){
            Fib[i]=Fib[i-1]+Fib[i-2];
        }
        printf("Fib(%lld) = %lld\n",num,Fib[num]);
    }
    return 0;
}