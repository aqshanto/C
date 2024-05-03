#include<stdio.h>
#include<string.h>

int is_palindrome(char str[]){
    int size=strlen(str);
    int j=size-1;
    for(int i=0;i<size;i++){
        if(str[i]!=str[j]){
            return 1;
        }else{
            j--;
        }
    }
    return 0;
}

int main(){
    char ch[1000];
    scanf("%s",ch);
    if(is_palindrome(ch)==1){
        printf("Not Palindrome\n");
    }else{
        printf("Palindrome\n");
    }
    return 0;
}