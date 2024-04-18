//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A
#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d",&n);
    int A[n];
    long long int sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
        sum=sum+(long long int)A[i];
    }
    if(sum<0){
        long long int sum1=abs(sum);
        printf("%lld\n",sum1);
    }else
        printf("%lld\n",sum);
    return 0;
}