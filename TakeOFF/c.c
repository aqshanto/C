#include<stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int A[n],num;
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int sum=0;
    for(int i=0;i<m;i++){
        scanf("%d",&num);
        sum=sum+A[num-1];
    }
    printf("%d\n",sum);
    return 0;
}