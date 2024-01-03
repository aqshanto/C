#include<stdio.h>

int main(){
    int num, bin =0 , rem =0 , place =1;
    printf("enter your decimal number:");
    scanf("%d", &num);
    while (num!=0)
    {
        rem    = num%2;
        num    = num/2;
        bin    = bin +(rem*place);
        place  = place*10;
    }
    printf("your binary number is %d", bin);
    
    return 0;
}