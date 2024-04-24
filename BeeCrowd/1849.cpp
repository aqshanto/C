#include<stdio.h>

int main(){
    int A[4];
    scanf("%d %d %d %d",&A[0],&A[1],&A[2],&A[3]);
    for(int i=0;i<3;i++){
        for(int j=i+1;j<4;j++){
            if(A[i]<A[j]){
                int temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }
    for(int i=0;i<4;i++){
        if(A[i]==A[i+1]){
            printf("%d\n",A[i]*A[i]);
            break;
        }
    }
    return 0;
}