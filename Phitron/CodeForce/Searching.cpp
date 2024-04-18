//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int A[n];
    int pos=-1;
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int x;
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(x==A[i]){
            pos=i;
            break;
        }
    }
    printf("%d\n",pos);
    return 0;
}