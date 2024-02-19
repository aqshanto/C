#include<stdio.h>

int main(){
    printf("MUITO OBRIGADO\n");
    int fuel,fuel1=0,fuel2=0,fuel3=0;
    for (int i = 0;; i++)
    {
        scanf("%d",&fuel);
        if (fuel==1)
        {
            fuel1++;
        }
        else if (fuel==2)
        {
            fuel2++;
        }else if (fuel==3)
        {
            fuel3++;
        }else if(fuel==4){
            break;
        }else{

        }
    }
    printf("Alcool: %d\n",fuel1);
    printf("Gasolina: %d\n",fuel2);
    printf("Diesel: %d\n",fuel3);
    return 0;
}