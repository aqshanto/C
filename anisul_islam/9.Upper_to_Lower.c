#include<stdio.h>

int main(){
    char letter;
    printf("Enter your Uppercase letter: ");
    scanf("%c", &letter);
    printf("Your lowerCase letter is: %c", letter+32);

    return 0;
}