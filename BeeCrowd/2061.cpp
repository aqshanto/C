#include<stdio.h>
#include<string.h>

int main(){
    int ini,action;
    scanf("%d %d",&ini,&action);
    char ch[7];
    for (int i = 0; i < action; i++){
        scanf("%s",ch);
        if(strcmp(ch,"fechou")==0){
            ini++;
        }else{
            ini--;
        }
    }
    printf("%d\n",ini);
    
    return 0;
}