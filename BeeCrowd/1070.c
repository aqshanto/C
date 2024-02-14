#include<stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    if(x%2!=0){
        printf("%d\n",x);
        for(int i=0;i<5;i++){
            x=x+2;
            printf("%d\n",x);
        }
    }
    else{
        x=x+1;
        for(int i=0;i<6;i++){
        printf("%d\n",x);
        x =x+2;
    }
    }
    return 0;
}