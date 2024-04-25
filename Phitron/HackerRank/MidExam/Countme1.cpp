//https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-5/challenges/count-me-2-1
#include<stdio.h>

int main(){
    int test;
    scanf("%d",&test);
    int num[test];
    int count2=0,count3=0;
    for(int i=0;i<test;i++){
        scanf("%d",&num[i]);
        if(num[i]%2==0){
            count2++;
        }else if(num[i]%3==0){
            count3++;
        }
    }
    printf("%d %d\n",count2,count3);
    return 0;
}