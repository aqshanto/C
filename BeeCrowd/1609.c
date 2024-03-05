#include<stdio.h>

int main(){
    int T,N,num[10005];
    scanf("%d",&T);
    for(int i=1;i<=T;i++){
        scanf("%d",&N);
        int A=0;
        for(int j=0;j<N;j++){
            scanf("%d",&num[j]);
        }
        for(int i=0;i<N-1;i++){
            for(int j=i+1;j<N;j++){
                if(num[i]==num[j]){
                    A++;
                }
                
            }
        }
        printf("%d\n",(N-A));
    }
    return 0;
}