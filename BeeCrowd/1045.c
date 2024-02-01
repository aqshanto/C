#include<stdio.h>
#include<math.h>

int main(){
    double a,b,c;
    scanf("%lf %lf %lf", &a ,&b ,&c);

    if(a>=b+c){
        printf("NAO FORMA TRIANGULO\n");

        if(pow(a,2)==pow(b,2)+pow(c,2)){
            printf("TRIANGULO RETANGULO\n");
        }else if(pow(a,2)>pow(b,2)+pow(c,2)){
            printf("TRIANGULO OBTUSANGULO\n");
        }else if(pow(a,2)<pow(b,2)+pow(c,2)){
            printf("TRIANGULO ACUTANGULO\n");
        }else if(a==b && b==c){
            printf("TRIANGULO EQUILATERO\n");
        }else if(a==b || b==c || a==c){
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    else if(pow(a,2)==pow(b,2)+pow(c,2)){
        printf("TRIANGULO RETANGULO\n");
        
        if(a>=b+c){
        printf("NAO FORMA TRIANGULO\n");
        }else if(pow(a,2)>pow(b,2)+pow(c,2)){
            printf("TRIANGULO OBTUSANGULO\n");
        }else if(pow(a,2)<pow(b,2)+pow(c,2)){
            printf("TRIANGULO ACUTANGULO\n");
        }else if(a==b && b==c){
            printf("TRIANGULO EQUILATERO\n");
        }else if(a==b || b==c || a==c){
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    else if(pow(a,2)>pow(b,2)+pow(c,2)){
        printf("TRIANGULO OBTUSANGULO\n");

        if(a>=b+c){
        printf("NAO FORMA TRIANGULO\n");
        }else if(pow(a,2)==pow(b,2)+pow(c,2)){
            printf("TRIANGULO RETANGULO\n");
        }else if(pow(a,2)<pow(b,2)+pow(c,2)){
            printf("TRIANGULO ACUTANGULO\n");
        }else if(a==b && b==c){
            printf("TRIANGULO EQUILATERO\n");
        }else if(a==b || b==c || a==c){
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    else if(pow(a,2)<pow(b,2)+pow(c,2)){
        printf("TRIANGULO ACUTANGULO\n");

        if(a>=b+c){
            printf("NAO FORMA TRIANGULO\n");
        }else if(pow(a,2)==pow(b,2)+pow(c,2)){
            printf("TRIANGULO RETANGULO\n");
        }else if(pow(a,2)>pow(b,2)+pow(c,2)){
            printf("TRIANGULO OBTUSANGULO\n");
        }else if(a==b && b==c){
            printf("TRIANGULO EQUILATERO\n");
        }else if(a==b || b==c || a==c){
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    else if(a==b && b==c){
        printf("TRIANGULO EQUILATERO\n");

        if(a>=b+c){
            printf("NAO FORMA TRIANGULO\n");
        }else if(pow(a,2)==pow(b,2)+pow(c,2)){
            printf("TRIANGULO RETANGULO\n");
        }else if(pow(a,2)>pow(b,2)+pow(c,2)){
            printf("TRIANGULO OBTUSANGULO\n");
        }else if(pow(a,2)<pow(b,2)+pow(c,2)){
            printf("TRIANGULO ACUTANGULO\n");
        }else if(a==b || b==c || a==c){
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    else if(a==b || b==c || a==c){
        printf("TRIANGULO ISOSCELES\n");

        if(a>=b+c){
            printf("NAO FORMA TRIANGULO\n");
        }else if(pow(a,2)==pow(b,2)+pow(c,2)){
            printf("TRIANGULO RETANGULO\n");
        }else if(pow(a,2)>pow(b,2)+pow(c,2)){
            printf("TRIANGULO OBTUSANGULO\n");
        }else if(pow(a,2)<pow(b,2)+pow(c,2)){
            printf("TRIANGULO ACUTANGULO\n");
        }else if(a==b && b==c){
            printf("TRIANGULO EQUILATERO\n");
        }
    }
    return 0;
}