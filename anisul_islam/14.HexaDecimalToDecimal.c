#include<stdio.h>

int main(){
    int Dec , Hexa;
    printf("Enter your HexaDecimal Number:");
    scanf("%x", &Hexa);
    Dec = Hexa;
    printf("Your Decimal Value is %d",Dec);
    return 0;
}