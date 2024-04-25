//https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-5/challenges/tell-me
#include<stdio.h>

int main(){
    int test,size;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        scanf("%d",&size);
        int A[size];
        for(int j=0;j<size;j++){
            scanf("%d",&A[j]);
        }
        int x;
        scanf("%d",&x);
        int check=0;
        for(int j=0;j<size;j++){
            if(A[j]==x){
                check=1;
                printf("YES\n");
                break;
            }
        }
        if(check==0)printf("NO\n");
    }
    return 0;
}