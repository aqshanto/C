#include<stdio.h>

int main(){
    int Dec , Oct;
    printf("Enter your Octal Number:");
    scanf("%o", &Oct);
    Dec = Oct;
    printf("Your Octal Value is %d",Dec);
    return 0;
}