#include<stdio.h>

int main(){
    int a,n=0;
    int b =0;
    for(int i=1;i<=100;i++){
        scanf("%d",&a);
        if(a>b){
            b =a;
            n=i;
        }
    }
    printf("%d\n",b);
    printf("%d\n",n);
    return 0;
}