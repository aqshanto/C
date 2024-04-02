#include<stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    if(num<0){
        printf("negative\n");
    }
    else if(num==0){
        printf("zero\n");
    }
    else{
        printf("positive\n");
    }
    return 0;
}