#include<stdio.h>

int main(){
    int N,X,Y,sum;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        scanf("%d %d",&X,&Y);
        sum =0;
        if(X>Y){
            int temp=X;
            X=Y;
            Y=temp;
        }
        for(int i=(X+1);i<Y;i++){
            if(i%2!=0){
                sum +=i;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}