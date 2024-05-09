#include <stdio.h>

int main(){
    int test;
    while(1){
        scanf("%d",&test);
        if(!test){
            break;
        }
        char ch,dirc='N';
        for(int i=0;i<test;i++){
            scanf(" %c",&ch);
            if(dirc=='N' && ch=='D'){
                dirc='L';
            }else if(dirc=='N' && ch=='E'){
                dirc='O';
            }else if(dirc=='L' && ch=='D'){
                dirc='S';
            }else if(dirc=='L' && ch=='E'){
                dirc='N';
            }else if(dirc=='S' && ch=='D'){
                dirc='O';
            }else if(dirc=='S' && ch=='E'){
                dirc='L';
            }else if(dirc=='O' && ch=='D'){
                dirc='N';
            }else if(dirc=='O' && ch=='E'){
                dirc='S';
            }
        }
        printf("%c\n",dirc);
    }
}