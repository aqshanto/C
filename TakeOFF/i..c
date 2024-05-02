#include<stdio.h>
#include<string.h>

int main(){
    char S[200010];
    char T[200010];
    scanf("%s",S);
    scanf("%s",T);
    int x=strlen(S);
    int count=0;
    for(int i=0;i<x;i++){
        if(S[i]!=T[i]){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}