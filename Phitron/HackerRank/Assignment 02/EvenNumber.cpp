#include<stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    int middle = num/5;
    printf("%d %d %d %d %d\n",(middle-4),(middle-2),(middle),(middle+2),(middle+4));
    return 0;
}