#include<stdio.h>

int main(){
    float a,b;
    scanf("%f %f",&a,&b);
    float answer = ((b-a)/a)*100;
    printf("%0.2f%%\n",answer);
    return 0;
}