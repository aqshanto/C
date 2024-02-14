#include<stdio.h>
#include<math.h>

int main(){
    int n,h,x,l;
    scanf("%d",&n);
    scanf("%d %d %d",&h,&x,&l);
    float a = h*0.01, b = x*0.01, c = l*0.01;
    float ramp = sqrt((a*a)+(b*b));
    printf("%0.4f\n",(n*(ramp*c)));
    return 0;
}