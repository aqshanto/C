#include<stdio.h>
#include<string.h>

int main(){
    char S[1000];
    int count=0;
    fgets(S,1000,stdin);
    S[strcspn(S,"\n")]='\0';
    int length=strlen(S);
    for(int i=0;i<=length;i++){
        if(S[i]=='1'){
            count++;
        }
    }
    if(count%2==0){
        S[length-1]='0';
    }else{
        S[length-1]='1';
    }
    puts(S);
    return 0;
}