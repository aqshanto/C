//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E
#include<stdio.h>

int main(){
    int test;
    scanf("%d",&test);
    int arr[test];
    for(int i=0;i<test;i++){
        scanf("%d",&arr[i]);
    }
    int max=100000,postion=0;
    for(int i=0;i<test;i++){
        if(arr[i]<max){
            max=arr[i];
            postion=i;
        }
    }
    printf("%d %d\n",max,postion+1);
    return 0;
}