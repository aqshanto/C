//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y

#include<stdio.h>

int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    a=a%100;
    b=b%100;
    d=d%100;
    c=c%100;
    int multi=a*b*c*d;
    printf("%02d\n",multi%100);
    return 0;
}