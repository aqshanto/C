#include<stdio.h>

int main(){
    int test;
    long long int num;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        scanf("%lld",&num);
        long long int sum=0;
        int count=0;
        for(int i=1;;i++){
            sum=(i*(i+1))/2;
            if(sum>num){
                printf("%d\n",i-1);
                break;
            }else if(sum==num){
                printf("%d\n",i);
                break;
            }
        }
    }
    return 0;
}