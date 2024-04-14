//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E
#include<stdio.h>

int main(){
    int test,num,max=-1111;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        scanf("%d",&num);
        if(num>max){
            max=num;
        }
    }
    printf("%d\n",max);
    return 0;
}