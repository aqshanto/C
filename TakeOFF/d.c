#include<stdio.h>

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    char ch[n+1];
    char dup[n+1];
    scanf("%s",ch);
    int count=0;
    for(int i=0;i<n;i++){
        if(ch[i]=='o' &&count<k){
            dup[i]='o';
            count++;
        }else{
            dup[i]='x';
        }
    }
    for(int i=0;i<n;i++){
        printf("%c",dup[i]);
    }
    printf("\n");
    return 0;
}