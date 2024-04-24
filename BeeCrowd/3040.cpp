#include<stdio.h>

int main(){
    int test;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        int h,d,g;
        scanf("%d %d %d",&h,&d,&g);
        if(h>=200 && h<=300 && d>=50 && g>=160){
            printf("Sim\n");
        }else{
            printf("Nao\n");
        }
    }
    return 0;
}