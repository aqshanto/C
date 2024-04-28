#include<stdio.h>
#include<math.h>

int main(){
    int test,num;
    double result;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        scanf("%d",&num);
        result=pow(7,num);
        int digit= (int)result%10;
        printf("%d\n",digit);
    }
    return 0;
}