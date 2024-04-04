#include<stdio.h>

int main(){
    int N,D,a[501][101],count;
    while (N!=0 && D!=0)
    {
        scanf("%d %d",&N,&D);
        if(N==0 && D==0){
            break;
        }
        count=0;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < D; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for (int i = 0; i < N; i++)
        {
            count=0;
            for (int j = 0; j < D; j++)
            {
                if(a[i][j]){
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