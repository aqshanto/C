#include<stdio.h>

int main(){
    int x,y,sum=0;
    scanf("%d %d",&x,&y);
    if(x<y){
        for (int i = x; i <=y; i++){
        if (i%13!=0){
            sum = sum+i;
        }
        }
        printf("%d\n",sum);
    }
    else if (y<x)
    {
        for (int i = y; i <=x; i++){
        if (i%13!=0){
            sum = sum+i;
        }
    }
        printf("%d\n",sum);
    }
    if(x==y){
        printf("0\n");
    }
    return 0;
}
