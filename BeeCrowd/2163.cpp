#include<stdio.h>

int main(){
    int N,M,arr[1005][1005],count,position1,position2;
    scanf("%d %d",&N,&M);
    for (int i = 1; i <=N; i++){
        for (int j = 1; j <=M; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i = 1; i <=N; i++){
        count=2;
        for (int j = 1; j <=M; j++){
            if(arr[i][j]==42){
                if(arr[i-1][j]==7 && arr[i-1][j-1]==7 && arr[i-1][j+1]==7 && arr[i][j-1]==7 && arr[i][j+1]==7 && arr[i+1][j-1]==7 && arr[i+1][j]==7 && arr[i+1][j+1]==7){
                    count=1;
                    position1=i;
                    position2=j;
                    break;
                }
            }
        }
        if(count==1){
            break;
        }
    }if(count==1){
        printf("%d %d\n",position1,position2);
    }
    else if(count==2){
        printf("0 0\n");
    }
    return 0;
}