#include<stdio.h>

int main(){
    int a,b,c,d;
    scanf("%d %d %d", &a, &b, &c);
    d = a;
    if(a<b || a<c){
        if(b<c){
            d = c;
        }else{
            d = b;
        }
    }
    printf("%d o maior\n", d);
    return 0;
}