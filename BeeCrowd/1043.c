#include<stdio.h>

int main(){
    float a,b,c;
    scanf("%f %f %f", &a,&b,&c);
    if(a+b>c && b+c>a && a+c>b){
        printf("Perimetro = %0.1f",a+b+c);
    }else
    {
        printf("Area = %0.1f",(((a+b)/2)*c));
    }
    return 0;
}