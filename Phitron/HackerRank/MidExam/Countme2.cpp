//https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-5/challenges/count-me-2-2
#include<stdio.h>
#include<string.h>

int main(){
    char ch[100000];
    scanf("%s",ch);
    int len=strlen(ch);
    int count=0;
    for(int i=0;i<len;i++){
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'){

        }else{
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}