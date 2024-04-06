#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<=b && a<=c){
        if(b<=c){
            printf("%d %d\n",a,c);
        }else{
            printf("%d %d\n",a,b);
        }
    }else if(b<=a && b<=c){
        if(a<=c){
            printf("%d %d\n",b,c);
        }else{
            printf("%d %d\n",b,a);
        }
    }else{
        if(a<=b){
            printf("%d %d\n",c,b);
        }else{
            printf("%d %d\n",c,a);
        }
    }
    return 0;
}