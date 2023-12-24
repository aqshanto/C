#include<stdio.h>

int main(){
    char letter;
    
    printf("Enter your lowercase letter: ");
    scanf("%c", &letter);
    printf("Your Uppercase letter: %c",letter-32);

    return 0;
}