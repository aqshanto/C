#include<stdio.h>

int main(){
    float x;
    scanf("%f", &x);
    if(x>=0 && x<=100){
        if(0<=x &&x<=25){
            printf("Intervalo [0,25]\n");
        }
        if(25<x &&x<=50){
            printf("Intervalo (25,50]\n");
        }
        if(50<x &&x<=75){
            printf("Intervalo (50,75]\n");
        }
        if(75<x &&x<=100){
            printf("Intervalo (75,100]\n");
        }
    }else{
        printf("Fora de intervalo\n");
    }
    return 0;
}