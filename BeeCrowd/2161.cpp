#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    double n,result=0.0;
    while(a--){
        n=6+result;
        result=1/n;
    }
    result=result+3;
    printf("%0.10lf\n",result);
    return 0;
}