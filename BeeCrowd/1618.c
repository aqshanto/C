#include<stdio.h>

int main(){
    int n,ax,ay,bx,by,cx,cy,dx,dy,rx,ry;
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        scanf("%d %d %d %d %d %d %d %d %d %d",&ax,&ay,&bx,&by,&cx,&cy,&dx,&dy,&rx,&ry);
        if(rx>=ax && rx<=bx && ry>=ay && ry<=dy){
            printf("0\n");
        }
        else{
            printf("1\n");
        }
    }
    
    return 0;
}