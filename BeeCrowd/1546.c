#include<stdio.h>

int main(){
    int n,k,x;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&k);
        for (int i = 0; i < k; i++)
        {
            scanf("%d",&x);
            if (x==1)
            {
                printf("Rolien\n");
            }else if (x==2)
            {
                printf("Naej\n");
            }else if (x==3)
            {
                printf("Elehcim\n");
            }else if (x==4)
            {
                printf("Odranoel\n");
            }
        }     
    }  
    return 0;
}