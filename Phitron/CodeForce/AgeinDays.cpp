//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int year=n/365;
    n=n%365;
    int month=n/30;
    n=n%30;
    int day=n;
    printf("%d years\n",year);
    printf("%d months\n",month);
    printf("%d days\n",day);
    return 0;
}