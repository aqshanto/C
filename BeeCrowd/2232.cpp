#include<stdio.h>
#include<math.h>

int main(){
    int test,num;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        scanf("%d",&num);
        double sum=0;
        for(int j=1;j<=num;j++){
            double res=pow(2,(j-1));
            sum+=res;
        }
        printf("%0.0lf\n",sum);
    }
    return 0;
}