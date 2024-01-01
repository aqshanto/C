#include<stdio.h>

int main(){
    int Oct , Hexa;
    printf("Enter your Octal Number:");
    scanf("%o", &Oct);
    Hexa = Oct;
    printf("Your Hexadecimal Value is %x",Hexa);
    return 0;
}