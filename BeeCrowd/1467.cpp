#include<stdio.h>

int main(){
    int A[3];
    while(scanf("%d %d %d",&A[0],&A[1],&A[2])!=EOF){
        int count1=0,count0=0,pos=0,pos0=0;
        for(int i=0;i<3;i++){
            if(A[i]==1){
                count1++;
                pos=i;
            }
            else if (A[i]==0){
                count0++;
                pos0=i;
            }
        }
        if(count0==3 || count1==3)printf("*\n");
        else if(count1==1){
            if(pos==0)printf("A\n");
            if(pos==1)printf("B\n");
            if(pos==2)printf("C\n");
        }
        else if(count0==1){
            if(pos0==0)printf("A\n");
            if(pos0==1)printf("B\n");
            if(pos0==2)printf("C\n");
        }
    }
    
    
    return 0;
}