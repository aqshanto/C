#include<stdio.h>

int main(){
    int testCase,num,Fib[60];
    scanf("%d",&testCase);
    for(int i=0;i<testCase;i++){
        scanf("%d",&num);
        Fib[0]=0;
        Fib[1]=1;
        for(int i=2;i<=num;i++){
            Fib[i]=Fib[i-1]+Fib[i-2];
        }
        printf("Fib(%d) = %d\n",num,Fib[num]);
    }
    return 0;
}