//https://www.hackerrank.com/contests/assignment-02-a-introduction-to-c-programming-a-batch-05/challenges/update-and-print
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int x,v;
    scanf("%d %d",&x,&v);
    A[x]=v;
    for(int i=(n-1);i>=0;i--){
        printf("%d ",A[i]);
    }
    printf("\n");
    return 0;
}