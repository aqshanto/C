#include<stdio.h>

int main(){
    int a,b,q,r;
    scanf("%d %d",&a,&b);
    if((a%b)<0){
        q=(a/b)-1;
        r=a-(b*q);
    }else{
        q=a/b;
        r=a%b;
    }
    printf("%d %d\n",q,r);
    return 0;
}