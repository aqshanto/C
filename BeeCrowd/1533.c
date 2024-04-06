#include<stdio.h>

int main(){
    int N,i,j,position=0;
    while(N!=0){
        scanf("%d",&N);
        if(N==0){
            break;
        }
        int V[N];
        for(int i=0;i<N;i++){
            scanf("%d",&V[i]);
        }
        for(int i=0;i<N-1;i++){
            for(int j=i+1;j<N;j++){
                if(V[i]<V[j]){
                    if(i==1){
                        int position=j;
                        printf("%d\n",position);
                    }
                    int temp=V[i];
                    V[i]=V[j];
                    V[j]=temp;
                }
            }            
        }
        // for(int i=0;i<N;i++){
        //     printf("%d ",V[i]);
        // }
        printf("%d\n",position);
    }
    return 0;
}