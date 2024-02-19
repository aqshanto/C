#include<stdio.h>

int main(){
    int n,a;
    scanf("%d %d",&n,&a);
    for (int i = 0; i < a; i++)
    {
        int remainder =n%10;
        if (remainder==0)
        {
            n=n/10;
        }else if (remainder!=0)
        {
            n=n-1;
        }
    }
    printf("%d\n",n);
    return 0;
}