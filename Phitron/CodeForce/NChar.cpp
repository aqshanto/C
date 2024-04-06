#include<stdio.h>

int main(){
    char ch;
    scanf("%c",&ch);
    if(ch>=97 && ch<=122){
        printf("%c\n",ch-32);
    }else{
        printf("%c\n",ch+32);
    }
    return 0;
}