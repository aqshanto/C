#include<stdio.h>
int main(){
    int test,i,j;
    while(test!=0){
        scanf("%d",&test);
        if(test==0){
            break;
        }
        int I[test],A[test];
        for(i=0;i<test;i++){
            scanf("%d",&I[i]);
            A[i]=I[i];
        }
        for(i=0;i<test-1;i++){
            for(j=i+1;j<test;j++){
                if(I[j]>I[i]){
                    int temp=I[i];
                    I[i]=I[j];
                    I[j]=temp;
                }
            }
        }
        for(i=0;i<test;i++){
            if(I[1]==A[i]){
                printf("%d\n",i);
                break;
            }
        }
    }
}