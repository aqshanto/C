#include<stdio.h>

int main(){
    int test,n;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        scanf("%d",&n);
        if(n%2==0){
            printf("0\n");
        }else{
            printf("1\n");
        }
    }
    return 0;
}