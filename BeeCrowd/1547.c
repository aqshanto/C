#include<stdio.h>
#include<math.h>

int main(){
    int case1,stuNum,guessNum,Num,S,position;
    scanf("%d",&case1);
    for(int i=1;i<=case1;i++){
        scanf("%d %d",&stuNum,&guessNum);
        S=100,position=0;
        for(int i=1;i<=stuNum;i++){
            scanf("%d",&Num);
            if(Num==guessNum){
                position=i;
            }else{
                if(S>(abs(guessNum-Num))){
                    S=(abs(guessNum-Num));
                    position=i;
                }
            }
        }
        printf("%d\n",position);
    }

    return 0;
}