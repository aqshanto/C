#include<stdio.h>

int main(){
    char ch[100];
    double a ,b;
    scanf("%s %lf %lf",&ch,&a,&b);
    double c = b*0.15;
    printf("TOTAL = R$ %0.2lf\n",a+c);
    return 0;
}