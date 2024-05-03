#include<stdio.h>

int main(){
    int n,r;
    scanf("%d %d",&n,&r);
    int inner;
    if(n>=10){
        inner=r;
    }else{
        inner=r+(100*(10-n));
    }
    printf("%d\n",inner);
    return 0;
}