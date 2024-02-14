#include<stdio.h>
#include<math.h>

int main(){
    double a,b,c,a1,b1,c1;

    scanf("%lf %lf %lf", &a1 ,&b1 ,&c1);
    if(a1>b1 && a1>c1){
        a = a1;
        if(b1>c1){
            b =b1;
            c =c1;
        }else{
            b =c1;
            c =b1;
        }
    }
    if(b1>a1 && b1>c1){
        a = b1;
        if(a1>c1){
            b =a1;
            c =c1;
        }else{
            b =c1;
            c =a1;
        }
    }
    if(c1>b1 && c1>a1){
        a = c1;
        if(b1>a1){
            b =b1;
            c =a1;
        }else{
            b =a1;
            c =b1;
        }
    }
    if(a>=b+c)
        printf("NAO FORMA TRIANGULO\n");
    if(pow(a,2)==pow(b,2)+pow(c,2))
            printf("TRIANGULO RETANGULO\n");
    if(pow(a,2)>pow(b,2)+pow(c,2))
            printf("TRIANGULO OBTUSANGULO\n");
    if(pow(a,2)<pow(b,2)+pow(c,2))
            printf("TRIANGULO ACUTANGULO\n");
    if(a==b && b==c)
            printf("TRIANGULO EQUILATERO\n");
    if(a==b || b==c || a==c)
            printf("TRIANGULO ISOSCELES\n");
    return 0;
}