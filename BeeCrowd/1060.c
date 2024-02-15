#include<stdio.h>

int main(){
    double a;
    int b=0;
    for(int i=0;i<6;i++){
        scanf("%lf",&a);
        if(a>0.00){
            b++;
        }
    }
    printf("%d valores positivos\n",b);
    return 0;
}