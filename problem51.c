/*Practice Qs 51
    Salting 
    FInd the salted form of a password entered by user if the 
    Salt is "123" & added at the end.*/


#include<stdio.h>
#include<string.h>

void salting(char password[]);

int main(){
    char password[100];
    scanf("%s", password);
    salting(password);
    return 0;
}

void salting(char password[]){
    char salt[]="123";
    char newPassword[200];

    strcpy(newPassword, password); // newPassword = old password
    strcat(newPassword , salt); // newPasswrod = old password + salt
    puts(newPassword);
}