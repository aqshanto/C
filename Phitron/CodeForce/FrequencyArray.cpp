//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V
#include<stdio.h>

int main(){
    int size,range;
    scanf("%d %d",&size,&range);
    int arr[size];
    int restult[range]={0};
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<=range;i++){
        for(int j=0;j<size;j++){
            if(i==arr[j]){
                restult[i-1]++;
            }
        }
    }
    for(int i=0;i<range;i++){
        printf("%d\n",restult[i]);
    }
    return 0;
}