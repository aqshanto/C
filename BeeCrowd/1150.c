#include<stdio.h>

int main(){
    int x,z;
    scanf("%d %d",&x,&z);
    for (int i = 0;; i++)
    {
        if(z<x){
            scanf("%d",&z);
        }else if (z>x)
        {
            break;
        }
    }
    int sum =0;
    for (int i = 1;i<=z; i++)
    {
        sum=sum+x;
        x++;
        if(sum>=z){
            printf("%d\n",i);
            break;
        }
    }
    
    return 0;
}