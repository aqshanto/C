//https://docs.google.com/document/d/1uzoOl9K0McJaxyy_o0p4la_sGCC8A-O8/edit
#include<stdio.h>

int main(){
    char ch;
    scanf("%c",&ch);
    int num=(int)ch;
    if(num<=90 && num>=65){
        printf("%c",ch+32);
    }else if(num<=122 && num>=97){
        printf("%c",ch-32);
    }
    return 0;
}