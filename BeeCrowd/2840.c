#include<stdio.h>

int main(){
    int r,l;
    scanf("%d %d",&r,&l);
    float volumn = (4.0/3.0)*3.1415*r*r*r;
    int ballon;
    ballon = (l-1)/volumn;
    printf("%d\n",ballon);
    return 0;
}