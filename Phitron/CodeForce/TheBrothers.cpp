//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/L
#include<stdio.h>
#include<string.h>

int main(){
    char F1[200],F2[200],S1[200],S2[200];
    scanf("%s",F1);
    scanf("%s",S1);
    scanf("%s",F2);
    scanf("%s",S2);
    if(strcmp(S1,S2)==0){
        printf("ARE Brothers\n");
    }else
    {
        printf("NOT\n");
    }
    return 0;
}