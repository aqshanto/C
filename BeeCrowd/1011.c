#include<stdio.h>

int main(){
    double r;
    scanf("%lf",&r);
    double v = (4.0/3.0)*r*r*r*3.14159;
    printf("VOLUME = %0.3lf\n",v);
    return 0;
}