//https://docs.google.com/document/d/1PE2pezrJvMvUbNib2F0XksPzfrE9Op7l3IIcA9OcEAc/edit
#include<stdio.h>

int fibonacci(int n,int A[]);

int main(){
    int n;
    scanf("%d",&n);
    int A[50];
    printf("%d\n",fibonacci(n,A));
    return 0;
}

int fibonacci(int n,int A[]){
    A[0]=0,A[1]=1;
    int sum=1;
    for(int i=2;i<=n;i++){
        A[i]=A[i-1]+A[i-2];
    }
    return A[n];
}