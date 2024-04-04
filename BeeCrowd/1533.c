#include<stdio.h>

int main(){
    int N,position=0;
    while(N!=0){
        scanf("%d",&N);
        int V[N];
        for(int i=0;i<N;i++){
            scanf("%d",&V[i]);
        }
        for(int i=0;i<N;i++){
            if(V[i]==N){
                position=i+1;
                break;
            }
        }
        printf("%d\n",position);
    }
    return 0;
}