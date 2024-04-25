//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/D
#include<stdio.h>

int main(){
    int test;
    scanf("%d",&test);
    int arr[test];
    for(int i=0;i<test;i++){
        scanf("%d",&arr[i]);
    }for(int i=0;i<test;i++){
        if(arr[i]<=10)
            printf("A[%d] = %d\n",i,arr[i]);
    }
    return 0;
}