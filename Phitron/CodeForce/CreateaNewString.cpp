//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/A
#include<stdio.h>
#include<string.h>

int main(){
    char st1[1000];    
    char st2[1000];
    scanf("%s",st1);  
    scanf("%s",st2);
    int st1len=strlen(st1);
    int st2len=strlen(st2);
    printf("%d %d\n",st1len,st2len);
    printf("%s %s\n",st1,st2);
    return 0;
}