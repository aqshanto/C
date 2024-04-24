//https://codeforces.com/problemset/problem/1542/A
#include<stdio.h>

int main(){
    int test,intezer;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        scanf("%d",&intezer);
        int A[2*intezer];
        int counteven=0,countodd=0;
        for(int j=0;j<(2*intezer);j++){
            scanf("%d",&A[j]);
            if(A[j]%2==0)counteven++;
            else countodd++;
        }
        if(counteven==intezer && countodd==intezer)printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}