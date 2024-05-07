#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    double ans=(1.0*n)/100;
    if(n%100==0){
        printf("%0.0lf\n",ans);
    }else{
        printf("%lf\n",ans);
    }
    return 0;
}