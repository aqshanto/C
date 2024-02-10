#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a ,&b);
    float total_dis = a*b;
    printf("%0.3f\n",total_dis/12);
    return 0;
}