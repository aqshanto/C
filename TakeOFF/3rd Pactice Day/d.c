#include<stdio.h>

int main(){
    long long int x;
    scanf("%lld",&x);
    long long int ans=x/10;
    if(ans<0){
        printf("%lld",ans-1);
    }else{
        printf("%lld\n",ans);
    }
    return 0;
}