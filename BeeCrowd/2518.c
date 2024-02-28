#include<stdio.h>
#include<math.h>

int main(){
    int n,h,x,l;
    while (scanf("%d",&n)!=EOF)
    {
        scanf("%d %d %d",&h,&x,&l);
        float a = h*0.01, b = x*0.01, c = l*0.01;
        float ramp = sqrt((a*a)+(b*b));
        float area = ramp*n*c;
        printf("%0.4f\n",area);
    }
    
    
    return 0;
}