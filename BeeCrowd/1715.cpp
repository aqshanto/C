#include<stdio.h>

int main(){
    int player,match;
    scanf("%d %d",&player,&match);
    int data[player][match];
    for(int i=0;i<player;i++){
        for(int j=0;j<match;j++){
            scanf("%d",&data[i][j]);
        }
    }
    int result=0;
    for(int i=0;i<player;i++){
        int count=0;
        for(int j=0;j<match;j++){
            if(data[i][j]>0){
                count++;
            }
        }
        if(count==match){
            result++;
        }
    }
    printf("%d\n",result);
    return 0;
}