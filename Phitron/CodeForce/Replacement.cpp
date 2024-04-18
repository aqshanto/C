//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
        if(A[i]<0){
            A[i]=2;
        }else if(A[i]>0){
            A[i]=1;
        }
    }
    
    for(int i=0;i<(n-1);i++){
        printf("%d ",A[i]);
    }
    printf("%d\n",A[n-1]);
    return 0;
}