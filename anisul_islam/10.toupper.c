#include<stdio.h>

int main(){
    char lower, upper;
    printf("Enter your lower case letter:");
    scanf("%c",&lower);
    upper = toupper(lower);
    printf("Your upper case letter is %c", upper);
}