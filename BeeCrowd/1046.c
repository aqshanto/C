#include<stdio.h>

int main(){
    int a,b,time;
    scanf("%d %d",&a,&b);
    if(a>b){
        time = (24-a)+b;
    }
    else if (a<b)
    {
        time = b-a;
    }else if (a==b)
    {
        time = 24;
    }
    printf("O JOGO DUROU %d HORA(S)\n",time);
    return 0;
}