#include<stdio.h>

int main(){
    int Oct , Hexa;
    printf("Enter your HexaDecimal Number:");
    scanf("%x", &Hexa);
    Oct = Hexa;
    printf("Your Octal Value is %o",Oct);
    return 0;
}