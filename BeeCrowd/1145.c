#include<stdio.h>

int main(){
    int x,y,i=1;
    scanf("%d %d",&x,&y);
    while (i<=y)
    {
        for(int j=1;j<=(x-1);j++){
            printf("%d ",i);
            i++;
        }
        printf("%d\n",i);   
        i++;
    }
    return 0;
}