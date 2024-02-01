#include<stdio.h>

int main(){
    int R ,C;
    scanf("%d", &R);
    scanf("%d", &C);
    if(R%2!=0 && C%2!=0){
        printf("1\n");
    }else if(R%2==0 && C%2==0){
        printf("1\n");
    }else if(R%2!=0 && C%2==0){
        printf("0\n");
    }else if(R%2==0 && C%2!=0){
        printf("0\n");
    }
    return 0;
}