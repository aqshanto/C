#include<stdio.h>

int main(){
    char ch;
    scanf("%c",&ch);
    int pos = (int)ch;
    if(pos<=90 && pos>=65){
        if(pos==90){
            printf("A\n");
        }else 
        printf("%c\n",pos+1);
    }else{
        if(pos==122){
            printf("a\n");
        }else 
        printf("%c\n",pos+1);
    }
    return 0;
}