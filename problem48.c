/*Practice Qs 48
    Ask the user to enter their firstName & print it back to them
    
    Also try this with their fullName*/

#include <stdio.h>

int main (){

    char firstName[20];
    printf("Enter your first name: ");
    scanf("%s", firstName);
    printf("%s\n", firstName);
    printf("Enter your Full name: ");
    char fullName[100];
    fgets(fullName, 100, stdin);
    puts(fullName);

}
