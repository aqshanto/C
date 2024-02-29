#include<stdio.h>

int main(){
    double V,D;
    while(scanf("%lf %lf",&V,&D)!=EOF){
        double redius = D/2;
        double hieght = V/((redius*redius)*3.14);
        printf("ALTURA = %0.2lf\n",hieght);
        printf("AREA = %0.2lf\n",(3.14*redius*redius));
    }
    return 0;
}