//https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-5/challenges/count-me-3
#include<stdio.h>
#include<string.h>

int main(){
    int test;
    scanf("%d",&test);
    char ch[10000];
    for(int i=0;i<test;i++){
        scanf("%s",ch);
        int num=0,cap=0,small=0;
        int len=strlen(ch);
        for(int j=0;j<len;j++){
            if(ch[j]>=48 && ch[j]<=57){
                num++;
            }else if(ch[j]>=65 && ch[j]<=90){
                cap++;
            }else if(ch[j]>=97 && ch[j]<=122){
                small++;
            }
        }
        printf("%d %d %d\n",cap,small,num);
    }
    return 0;
}