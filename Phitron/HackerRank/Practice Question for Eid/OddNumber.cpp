#include<stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    int middle = num/4;
    printf("%d %d %d %d\n",(middle-3),(middle-1),(middle+1),(middle+3));
    return 0;
}