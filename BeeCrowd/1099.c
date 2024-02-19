#include<stdio.h>

int main(){
    int n,x,y;
    // for (int a = 0; a < n; a++)
    // {
        scanf("%d %d",&x,&y);
        if(x<y){
            int sum =0;
            for(int i =(x+1);i<y;i++){
            if(i%2!=0){
                printf("%d\n",i);
                sum = sum+i;
            }
            printf("%d\n",sum);
        }
        }else if (y<x)
        {
            int sum =0;
            for(int i =(y+1);i<x;i++){
            if(i%2!=0){
                printf("%d\n",i);
                sum = sum+i;
            }
            printf("%d\n",sum);
        }
        }
    // }    
    return 0;
}