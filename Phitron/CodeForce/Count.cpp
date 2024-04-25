//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/E
#include<stdio.h>
#include<string.h>

int main(){
    char ch[1000000];
    fgets(ch,1000000,stdin);
    int len=strlen(ch);
    int sum=0;
    for(int i=0;i<len-1;i++){
        int num=(int)ch[i]-48;
        sum+=num;
    }
    printf("%d\n",sum);
    return 0;
}