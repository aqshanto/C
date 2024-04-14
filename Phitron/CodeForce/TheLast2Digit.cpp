//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y

#include<stdio.h>

int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    long long int multi;
    multi=a*b*c*d;
    printf("%lld\n",multi,multi%100);
    return 0;
}