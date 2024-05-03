#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n<10){
        printf("AGC00%d\n",n);
    }
    else if(n>=42){
        printf("AGC0%d\n",n+1);
    }else{
        printf("AGC0%d\n",n);
    }
    return 0;
}