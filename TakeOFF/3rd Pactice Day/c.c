#include<stdio.h>
#include<string.h>

int main(){
    char ch[105];
    scanf("%s",ch);
    int length=strlen(ch);
    for(int i=0;i<(length/2);i++){
        char temp=ch[2*i];
        ch[2*i]=ch[2*i+1];
        ch[2*i+1]=temp;
    }
    printf("%s\n",ch);
    return 0;
}