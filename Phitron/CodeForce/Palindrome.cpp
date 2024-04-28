//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I
#include<stdio.h>
#include<string.h>

int main(){
    char ch[1000];
    scanf("%s",ch);
    int len=strlen(ch);
    char dup[len];
    int j=len-1;
    for(int i=0;i<len;i++){
        dup[i]=ch[j];
        j--;
    }
    dup[len]='\0';
    if(strcmp(ch,dup)==0){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}