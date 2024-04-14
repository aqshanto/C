#include<stdio.h>

int main(){
    while (1){
        int test;
        scanf("%d",&test);
        if(test==0){
            break;
        }
        int node[test+2];
        for(int i=1;i<=test;i++){
            scanf("%d",&node[i]);
        }
        node[0]=node[test];
        node[test+1]=node[1];
        int count=0;
        for(int i=1;i<=test;i++){
            if(((node[i]<node[i-1]) && (node[i]<node[i+1]))|| ((node[i]>node[i-1]) && (node[i]>node[i+1]))){
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}