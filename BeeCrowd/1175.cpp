#include<stdio.h>

int main(){
    int n[20];
    for(int i=0;i<20;i++){
        scanf("%d",&n[i]);
    }
    int i=0,j=19;
    while(i<j){
        int temp=n[j];
        n[j]=n[i];
        n[i]=temp;
        i++;j--;
    }
    for(int i=0;i<20;i++){
        printf("N[%d] = %d\n",i,n[i]);
    }
    return 0;
}