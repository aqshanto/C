//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M
#include<stdio.h>

int main(){
    int test;
    scanf("%d",&test);
    int arr[test];
    for(int i=0;i<test;i++){
        scanf("%d",&arr[i]);
    }
    int min=0,max=-0;
    for(int i=1;i<test;i++){
        if(arr[min]>arr[i]){
            min=arr[i];
            
        }else if(max<arr[i]){
            max=arr[i];
        }
    }
    
    for(int i=0;i<test;i++){
        if(min==arr[i]){
            arr[i]=max;
            
        }else if(max==arr[i]){
            arr[i]=min;
        }
    }printf("%d",arr[0]);
    for(int i=1;i<test;i++){
        printf(" %d",arr[i]);
    }printf("\n");
    return 0;
}