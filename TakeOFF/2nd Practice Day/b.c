#include<stdio.h>

int main(){
    char ch;
    scanf("%c",&ch);
    if(ch=='A'){
        printf("T\n");
    }if(ch=='T'){
        printf("A\n");
    }if(ch=='G'){
        printf("C\n");
    }if(ch=='C'){
        printf("G\n");
    }
    return 0;
}