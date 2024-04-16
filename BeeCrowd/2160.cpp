#include<stdio.h>
#include<string.h>

int main(){
    char ch[501];
    fgets(ch,501,stdin);
    int length=strlen(ch);
    if((length-1)<=80){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}