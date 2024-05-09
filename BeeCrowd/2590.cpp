#include<stdio.h>
#include<math.h>

int main(){
    int test,num;
    double result;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        scanf("%d",&num);
        if(num%4==0)printf("1\n");
        if(num%4==1)printf("7\n");
        if(num%4==2)printf("9\n");
        if(num%4==3)printf("3\n");
    }
    return 0;
}