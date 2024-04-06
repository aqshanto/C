#include<stdio.h>

int main(){
    int N,i,j,position,count;
    while(N!=0){
        scanf("%d",&N);
        if(N==0){
            break;
        }
        int V[N];
        position=0;
        count=0;
        for(int i=0;i<N;i++){
            scanf("%d",&V[i]);
        }
        for(int i=0;i<N-1;i++){
            for(int j=i+1;j<N;j++){
                if(V[i]<V[j]){
                    if(i==1){
                        position=j;
                        //printf("ok %d\n",position);
                    }
                    int temp=V[i];
                    V[i]=V[j];
                    V[j]=temp;
                    count++;
                }
            }            
        }
        if(count==0){
            position=1;
        }
        // for(int i=0;i<N;i++){
        //     printf("arrange: ");
        //     printf("%d ",V[i]);
        // }
        printf("%d\n",position+1);
    }
    return 0;
}

//here is a issue with 3=5 3 2