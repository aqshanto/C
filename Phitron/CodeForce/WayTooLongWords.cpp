//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F
#include<stdio.h>
#include<string.h>

int main(){
    int test;
    scanf("%d",&test);
    char ch[100];
    for(int i=0;i<test;i++){
        scanf("%s",ch);
        int len=strlen(ch);
        //printf("%d\n",len);
        if(len>10){
            printf("%c%d%c\n",ch[0],len-2,ch[len-1]);
        }else{
            printf("%s\n",ch);
        }
    }
    return 0;
}