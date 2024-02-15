#include<stdio.h>

int main(){
    double a,sum=0;
    int b=0;
    for(int i=0;i<6;i++){
        scanf("%lf",&a);
        if(a>0.00){
            b++;
            sum = sum+a;
        }
    }
    printf("%d valores positivos\n",b);
    printf("%0.1lf\n",(sum/b));
    return 0;
}