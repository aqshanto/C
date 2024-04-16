//https://docs.google.com/document/d/1Fui_bzBPmM45dPV1yUWU25nrB8jfr7D1kE2HE_FzR70/edit
#include<stdio.h>

void printArray(int n,int A[]);

int main(){
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    printArray(n,A);
    return 0;
}

void printArray(int n,int A[]){
    for(int i=0;i<(n/2)+1;i++){
        printf("%d %d\n",A[i],A[n-1-i]);
    }
}