//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G
#include<stdio.h>
#include<string.h>

int main(){
    char ch[100000];
    scanf("%s",ch);
    int len=strlen(ch);
    for(int i=0;i<len;i++){
        if(ch[i]==','){
            ch[i]=' ';
        }else if((int)ch[i]<=90 && (int)ch[i]>=65){
            ch[i]=ch[i]+32;
        }else if((int)ch[i]<=122 && (int)ch[i]>=97){
            ch[i]=ch[i]-32;
        }
    }
    for(int i=0;i<len;i++){
        printf("%c",ch[i]);
    }printf("\n");
    return 0;
}