//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F
#include<stdio.h>

int main(){
    long long int n,m;
    scanf("%lld %lld",&n,&m);
    printf("%lld\n",(n%10)+(m%10));
    return 0;
}