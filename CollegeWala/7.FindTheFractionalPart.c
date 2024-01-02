#include<stdio.h>

int main(){
    float x,frac;
    printf("Enter your number:");
    scanf("%f",&x);
    int y;
    y=x;
    frac = x -y;
    printf("The Fractional Part is %f",frac);
    return 0;
}