#include<stdio.h>

int main(){
    int num,Xo,Yo,X,Y;
    for(int a=0;;a++){
        scanf("%d",&num);
        if(num==0){
            break;
        }
        scanf("%d %d",&Xo,&Yo);
        for(int i=0;i<num;i++){
            scanf("%d %d",&X,&Y);
            if(X==Xo || Y ==Yo ){
                printf("divisa\n");
            }
            else if(X<Xo && Y<Yo){
                printf("SO\n");
            }
            else if(X<Xo && Y>Yo){
                printf("NO\n");
            }
            else if(X>Xo && Y>Yo){
                printf("NE\n");
            }
            else if(X>Xo && Y<Yo){
                printf("SE\n");
            }
        }
    }
    
    return 0;
}