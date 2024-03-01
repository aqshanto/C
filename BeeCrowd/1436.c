#include<stdio.h>

int main(){
    int testCase,playNum,age[15];
    scanf("%d",&testCase);
    for(int i=1;i<=testCase;i++){
        scanf("%d",&playNum);
        for(int j=1;j<=playNum;j++){
            scanf("%d",&age[j]);
        }
        int ans=(playNum+1)/2;
        printf("Case 1: %d\n",age[ans]);
    }
    return 0;
}