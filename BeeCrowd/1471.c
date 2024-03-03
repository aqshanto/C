#include<stdio.h>

int main(){
    int N,R,num[10005],count=1;
    while(scanf("%d %d",&N,&R)!=EOF){
        for(int i=0;i<R;i++){
            scanf("%d",&num[i]);
        }
        if(N==R){
            printf("*\n");
        }
        else{
            for(int i=1;i<=N;i++){
                for(int j=0;j<R;j++){
                    if(num[j]!=i){
                        count=0;
                    }
                    else{
                        count=1;
                        break;
                    }
                }
                if(count==0){
                    printf("%d ",i);
                }
            }
            printf("\n");
        }
    }
    return 0;
}