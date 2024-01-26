#include<stdio.h>
#include<math.h>

int main(){
    double a, b, c ,d, d1, r1, r2;
    scanf("%lf %lf %lf", &a ,&b ,&c);
    d = (b*b)-4*a*c;
    d1 = sqrt(d);
    r1=(-b+d1)/(2*a);
    r2=(-b-d1)/(2*a);
    if(d<0 || a==0){
        printf("Impossivel calcular\n");
    }
    else{
        printf("R1 = %.5lf\n", r1);
        printf("R2 = %.5lf\n", r2);
    }
        return 0;
}