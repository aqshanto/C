//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q
#include<stdio.h>

int main(){
    int test;
    scanf("%d",&test);
    for (int i = 1; i <=test; i++){
        int num;
        scanf("%d",&num);
        do{
            printf("%d ",num%10);
            num/=10;
        }
        while (num!=0);
        printf("\n");
    }
    
    return 0;
}