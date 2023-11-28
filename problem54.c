/*Practice Qs 54
    Check if a given Character is present in the string or not.*/

#include<stdio.h>
#include<string.h>

void checkCharacter(char str[], char ch);

int main(){
    char str[] ="Shanto";
    char ch = 'h';
    checkCharacter(str, ch);
}

void checkCharacter(char str[], char ch){
    for(int i =0; str[i]!= '\0';i++){
        if (str[i] == ch){
            printf("Yes\n");
            return;
        }
    }
}