#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int A[10];
    A[0]=1;
    for(int i=1;i<9;i++){
        A[i]=A[i-1]*i;
    }
    int sum=0;
    for(int i=9;i>=1;i--){
        sum=sum+(N/A[i]);
        N=N%A[i];
    }
    printf("%d\n",sum);
    return 0;
}