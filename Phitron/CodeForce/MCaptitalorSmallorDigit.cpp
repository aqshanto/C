//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M
#include<stdio.h>

int main(){
    char ch;
    scanf("%c",&ch);
    if(ch<=57 && ch>=47){
        printf("IS DIGIT\n");
    }else if(ch>=65 && ch<=90){
        printf("ALPHA\n");
        printf("IS CAPITAL\n");
    }else if(ch>=97 && ch<=122){
        printf("ALPHA\n");
        printf("IS SMALL\n");
    }
    return 0;
}