#include<stdio.h>
#include<math.h>

int main(){
    int case1,stuNum,guessNum,Num,S=100,position;
    scanf("%d",&case1);
    for(int i=1;i<=case1;i++){
        scanf("%d %d",&stuNum,&guessNum);
        for(int j=1;j<=stuNum;j++){
            scanf("%d",&Num);
            if(Num==guessNum){
                position=j;
            }else{
                if(S>(abs(guessNum-Num))){
                    S=(abs(guessNum-Num));
                    position=j;
                }
            }
        }
        printf("%d\n",position);
    }

    return 0;
}
