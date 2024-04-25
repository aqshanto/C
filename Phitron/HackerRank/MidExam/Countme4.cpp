//https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-5/challenges/count-me-4
#include<stdio.h>
#include<string.h>

int main(){
    char ch[10000];
    scanf("%s",ch);
    int len=strlen(ch);
    int alpha[26];
    for(int i=0;i<26;i++){
        alpha[i]=0;
    }
    for(int i=0;i<len;i++){
        int pos=(int)ch[i]-97;
        alpha[pos]++;
    }
    for(int i=0;i<26;i++){
        if(alpha[i]>0){
            printf("%c - %d\n",i+97,alpha[i]);
        }
    }
    return 0;
}