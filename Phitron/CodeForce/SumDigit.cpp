//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K
#include<stdio.h>

int main(){
    int size;
    scanf("%d",&size);
    char num[size];
    scanf("%s",num);
    long long int sum=0,digit;
    for(int i=0;i<size;i++){
        digit=(long long int)num[i]-48;
        sum+=digit;
    }
    printf("%d\n",sum);
    return 0;
}