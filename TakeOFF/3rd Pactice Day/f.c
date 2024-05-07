#include<stdio.h>

int main(){
    int size;
    scanf("%d",&size);
    int S[size+1];
    int A[size+1];
    S[0]=0;
    for(int i=1;i<=size;i++){
        scanf("%d",&S[i]);
    }
    for(int i=1;i<=size;i++){
        A[i]=S[i]-S[i-1];
    }
    for(int i=1;i<=size;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
    return 0;
}