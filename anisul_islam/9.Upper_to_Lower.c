#include<stdio.h>

int main(){
    char Upper;
    
    printf("Enter your Uppercase letter: ");
    scanf("%c", &Upper);
    printf("Your lowerCase letter is: %c", Upper+32);

    return 0;
}