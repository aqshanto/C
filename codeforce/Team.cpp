//https://codeforces.com/problemset/problem/231/A
#include<stdio.h>

int main(){
    int test;
    scanf("%d",&test);
    int num1,num2,num3,count=0;
    for(int i=0;i<test;i++){
        scanf("%d %d %d",&num1,&num2,&num3);
        int sum=num1+num2+num3;
        if(sum>=2){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}