#include<stdio.h>

int main(){
    int N,D,a[501][101],count,i,j;
    while (N!=0 && D!=0)
    {
        scanf("%d %d",&N,&D);
        if(N==0 && D==0){
            break;
        }
        for (i = 0; i < N; i++){
            for (j = 0; j < D; j++){
                scanf("%d",&a[i][j]);
            }
        }
        for (i = 0; i < D; i++){
            count=0;
            for (j = 0; j < N; j++){
                if(a[i][j]==1){
                    count++;
                }
            }
            if(count==D){
                printf("yes\n");
                break;
            }
        }
        if(count!=D){
            printf("no\n");
        }
    }
    
    return 0;
}