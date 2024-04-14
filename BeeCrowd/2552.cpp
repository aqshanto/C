#include<stdio.h>

int main(){
    int n,m;
    while(scanf("%d %d",&n,&m)!=EOF){
        int board[n+2][m+2],i,j;
        for (i = 0; i <=n+1; i++){
            for(j=0;j<=m+1;j++){
                if(i==0 || j==0 || i==(n+1) || j==(m+1)){
                    board[i][j]=0;
                }else{
                    scanf("%d",&board[i][j]);
                }
            }
        }
        // for (i = 0; i <=n+1; i++){
        //     for(j=0;j<=m+1;j++){
        //         printf("%d",board[i][j]);
        //     }
        //     printf("\n");
        // }
        for (i = 1; i <=n; i++){
            for(j=1;j<=m;j++){
                if(board[i][j]==1){
                    printf("9");
                }else{
                    int count=0;
                    if (board[i-1][j]==1){
                        count++;
                    }
                    if(board[i+1][j]==1){
                        count++;
                    }
                    if (board[i][j-1]==1){
                        count++;
                    }
                    if(board[i][j+1]==1){
                        count++;
                    }
                    printf("%d",count);
                }
            }
            printf("\n");
        }
    }
    
    return 0;
}