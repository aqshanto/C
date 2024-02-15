#include<stdio.h>

int main(){
    int a=1;
    printf("I=%d J=7\n",a);
    printf("I=%d J=6\n",a);
    printf("I=%d J=5\n",a);
    for(int i=1;i<=4;i++){
        a =a+2;
        printf("I=%d J=7\n",a);
        printf("I=%d J=6\n",a);
        printf("I=%d J=5\n",a);
    }
    return 0;
}