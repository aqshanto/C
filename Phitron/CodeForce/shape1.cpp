//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/P
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}