#include<stdio.h>

int main(){
    int t,n[1000];
    scanf("%d",&t);
    int j=0;
    for(int i=0;i<1000;i++){
        printf("N[%d] = %d\n",i,j);
        if(j==(t-1)){
            j=0;
        }else{
            j++;
        }
    }
    return 0;
}