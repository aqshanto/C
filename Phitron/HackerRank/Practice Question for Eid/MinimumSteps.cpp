#include<stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    if(x%3==0){
        printf("%d\n",x/3);
    }else{
        printf("%d\n",(x/3)+1);
    }
    return 0;
}