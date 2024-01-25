#include<stdio.h>

int main(){
    int code1 , unit1 , code2 , unit2;
    float product1 , product2 , price1 , price2;
    scanf("%d %d %f", &code1 , &unit1 , &price1);        
    scanf("%d %d %f", &code2 , &unit2 , &price2);
    product1 = unit1*price1;
    product2 = unit2*price2;
    printf("VALOR A PAGAR: R$ %.2f\n",product1+product2);
    return 0;
}