//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q
#include<stdio.h>

int main(){
    int test,num;
    scanf("%d",&test);
    for (int i = 0; i < test; i++){
        scanf("%d",&num);
        while (num!=0){
            int reminder=num%10;
            num/=10;
            printf("%d ",reminder);
        }
        printf("\n");
    }
    
    return 0;
}