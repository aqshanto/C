#include<stdio.h>

int main(){
    int l,c;
    scanf("%d %d",&l,&c);
    int totaltiles=l*c*8;
    int half=2*(l-1)+2*(c-1);
    int full=(totaltiles/4)-1-(half/2);
    printf("%d\n",full);
    printf("%d\n",half);
    return 0;
}