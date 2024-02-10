#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d",&a);
    b = (30*1000)/60;
    c = (a*1000)/b;
    printf("%d minutos\n",c);
    return 0;
}