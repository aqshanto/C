#include<stdio.h>

int main(){
    char name[50];
    char name1[50];
    char name2[50];

    printf("Enter your name:"); 
    gets(name);
    printf("Your name is: %s\n", name);
    printf("Enter your name again:");
    fgets(name1, sizeof(name1), stdin);
    printf("Your name is: %s\n", name1);
    printf("Enter your name again:");
    scanf("%s", &name2);
    printf("Your name is: %s\n", name2);

    return 0;
}