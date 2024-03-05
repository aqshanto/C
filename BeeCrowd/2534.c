#include<stdio.h>

int main(){
    int N,Q,num,Ni[110],pi,temp;
    while(scanf("%d %d",&N,&Q)!=EOF){
        for(int i=0;i<N;i++){
            scanf("%d",&Ni[i]);
        }
        for(int i=0;i<(N-1);i++){
            for(int j=i+1;j<N;j++){
                if(Ni[i]<Ni[j]){
                    temp=Ni[i];
                    Ni[i]=Ni[j];
                    Ni[j]=temp;
                }
            }
        }
        for(int i=0;i<N;i++){
            printf("%d\n",Ni[i]);
        }
        for(int i=1;i<=Q;i++){
            scanf("%d",&pi);
            printf("%d\n",Ni[pi-1]);
        }
    }
    return 0;
}