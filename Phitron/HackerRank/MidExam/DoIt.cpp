//https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-5/challenges/do-it-5
#include<stdio.h>

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++){
        for(int j=1;j<=k;j++){
            printf("%d ",j);
        }printf("\n");
    }
    return 0;
}