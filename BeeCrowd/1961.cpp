#include<stdio.h>
#include<math.h>

int main(){
    int height,size;
    scanf("%d %d",&height,&size);
    int pipe[size];
    for(int i=0;i<size;i++){
        scanf("%d",&pipe[i]);
    }
    int win=1;
    for(int i=0;i<size-1;i++){
        if(abs(pipe[i]-pipe[i+1])<=height){
            win=1;
        }else{
            win=0;
            break;
        }
    }
    if(win==1)printf("YOU WIN\n");
    else printf("GAME OVER\n");
    return 0;
}