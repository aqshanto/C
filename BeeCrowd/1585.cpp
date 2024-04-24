#include<stdio.h>

int main(){
    int test;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        printf("%d cm2\n",(a*b)/2);
    }
    return 0;
}