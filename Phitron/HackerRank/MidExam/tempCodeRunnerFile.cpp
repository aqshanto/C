//https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-5/challenges/farmers-1
#include<stdio.h>

int main(){
    int test;
    scanf("%d",&test);
    int m1,m2,d1;
    for(int i=0;i<test;i++){
        scanf("%d %d %d",&m1,&m2,&d1);
        int d2=(m1*d1)/(m1+m2);
        printf("%d\n",d1-d2);
    }
    return 0;
}