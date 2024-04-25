//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/B
#include<stdio.h>

int main(){
    char ch[1000000];
    fgets(ch,1000000,stdin);
    for(int i=0;ch[i]!='\\';i++){
        printf("%c",ch[i]);
    }printf("\n");
    return 0;
}