//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B
#include<stdio.h>

int main(){
    int n,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2==0){
            printf("%d\n",i);
            count++;
        }
    }
    if(count==0){
        printf("-1\n");
    }
    return 0;
}