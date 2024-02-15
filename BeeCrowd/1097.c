#include<stdio.h>

int main(){
    int a=1,b=7,c=6,d=5;
    printf("I=%d J=%d\n",a,b);
    printf("I=%d J=%d\n",a,c);
    printf("I=%d J=%d\n",a,d);

    for(int i=1;i<=4;i++){
        a =a+2;
        b =b+2;
        c =c+2;
        d =d+2;
        printf("I=%d J=%d\n",a,b);
        printf("I=%d J=%d\n",a,c);
        printf("I=%d J=%d\n",a,d);
    }
    return 0;
}