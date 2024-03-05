#include<stdio.h>

int main(){
    int X[10];
    for(int i=0;i<10;i++){
        scanf("%d",&X[i]);
    }
    for(int i=0;i<10;i++){
        if(X[i]<=0){
            printf("X[%d] = 1\n",i);
        }
        else if(X[i]>0){
            printf("X[%d] = %d\n",i,X[i]);
        }
    }
    return 0;
}