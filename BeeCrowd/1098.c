#include<stdio.h>

int main(){
    float a ;
    float b = 0 ;
    float c = 0 ;
    float d = 0 ;
    a = 10;

    for (int i =0 ; i<=a; i++){
        int e ;
        e = b *10;
        if(e%10 ==0 ){
            printf("I=%0.0f J=%0.0f\n", b , b+1);
            printf("I=%0.0f J=%0.0f\n", c , c+2);
            printf("I=%0.0f J=%0.0f\n", d , d+3);
        }else{
            printf("I=%0.1f J=%0.1f\n", b , b+1);
            printf("I=%0.1f J=%0.1f\n", c , c+2);
            printf("I=%0.1f J=%0.1f\n", d , d+3);
        }
        b = b + 0.2;
        c = c + 0.2;
        d = d + 0.2;
    }
    return 0;
}