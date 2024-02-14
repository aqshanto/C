#include<stdio.h>

int main(){
    int t,n,m;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d",&n);
        if(n%2!=0){
            m =(n-1)/2;
            printf("%d\n",m);
        }else if(n%2==0){
            m = (n/2)-1;
            printf("%d\n",m);
        }
    }
    
    return 0;
}