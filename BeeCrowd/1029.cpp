#include<stdio.h>

int fib(int n,int *calls){
    (*calls)++;
    int ans;
    int count=0;
    if(n==0 || n==1){
        ans = n;
    }
    else {
        ans = fib(n-1,calls)+fib(n-2,calls);
    }
    return ans;
}

int main(){
    int test,n;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        scanf("%d",&n);
        int calls=0;
        int result =fib(n,&calls);
        printf("fib(%d) = %d calls = %d\n",n,calls-1,result);
    }
    return 0;
}