#include<stdio.h>

int main(){
    int gift,child;
    scanf("%d %d",&gift,&child);
    printf("%d %d\n",(gift/child),(gift%child));
    return 0;
}