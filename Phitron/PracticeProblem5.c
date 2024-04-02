#include<stdio.h>

int main(){
    int amount;
    scanf("%d",&amount);
    if(amount>20000){
        printf("Gucci Bag\n");
        printf("Gucci Belt\n");
    }
    else if(amount>=10000){
        printf("Gucci Bag\n");
    }
    else if(amount>=5000){
        printf("Levis Bag\n");
    }
    else{
        printf("Something\n");
    }
    return 0;
}