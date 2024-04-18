//https://www.hackerrank.com/contests/assignment-02-a-introduction-to-c-programming-a-batch-05/challenges/sum-sum-2
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int A[n];
    int possum=0,negsum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
        if(A[i]<0){
            negsum+=A[i];
        }else if(A[i]>0){
            possum+=A[i];
        }
    }
    printf("%d %d\n",possum,negsum);
    return 0;
}