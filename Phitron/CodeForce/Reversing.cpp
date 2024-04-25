//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F
#include<stdio.h>

int main(){
    int test;
    scanf("%d",&test);
    int arr[test];
    for(int i=0;i<test;i++){
        scanf("%d",&arr[i]);
    }
    int i=0,j=test-1;
    while(i<j){
        int temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
        i++;
        j--;
    }
    for(int i=0;i<test;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}