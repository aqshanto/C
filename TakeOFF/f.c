//https://ideone.com/zRHtII
#include<stdio.h>

int main(){
    long long int a,b,x;
    scanf("%lld %lld %lld",&a,&b,&x);
    long long int count=(b-a)/x;
    if(a==b){
        printf("0\n");
    }else if(a%x==0 || b%x==0){
        printf("%lld\n",count+1);
    }else{
        printf("%lld\n",count);
    }
    return 0;
}