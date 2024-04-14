//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/X
#include<stdio.h>

int main(){
    int arr[4];
    for(int i=0;i<4;i++){
        scanf("%d",&arr[i]);
    }
    //printf("%d %d %d %d\n",arr[0],arr[1],arr[2],arr[3]);
    if(arr[2]<arr[1]){
        if(arr[3]<arr[1]){
            printf("%d %d\n",arr[2],arr[3]);
        }else
            printf("%d %d\n",arr[2],arr[1]);
    }else{
        printf("-1\n");
    }
    return 0;
}