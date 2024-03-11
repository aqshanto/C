#include<stdio.h>

int main(){
    float score1,score2;
    for(int i=0;;i++){
        scanf("%f",&score1);
        if(score1<0 || score1>10){
            printf("nota invalida\n");
        }
        else if(score1>=0 && score1<=10){
            break;
        }
    }
    for(int i=0;;i++){
        scanf("%f",&score2);
        if(score2<0 || score2>10){
            printf("nota invalida\n");
        }
        else if(score2>=0 && score2<=10){
            break;
        }
    }
    printf("media = %0.2f\n",(score1+score2)/2);
    return 0;
}