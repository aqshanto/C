#include<stdio.h>

int main(){
    int N,M,count,n[10000],t[20000],clone=0;
    
    for(int a=0;;a++){
        scanf("%d %d",&N,&M);
        if(N==0 && M==0){
            break;
        }
        for(int i=1; i<=N;i++){
            n[i]=i;
        }
        for(int j=1;j<=M;j++){
            scanf("%d",&t[j]);
        }
        for(int k=1;k<=N;k++){
            count=0;
            for(int x=1;x<=M;x++){
                if(n[k]==t[x]){
                    count++;
                    //printf("%d(%d) ",count,x);
                }
            }
            //printf("\n");
            if(count>1){
                clone++;
                //printf("%d ",clone);
            }
        }
        //printf("\n");
        printf("%d\n",clone);
    }
    
    return 0;
}