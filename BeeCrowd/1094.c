#include<stdio.h>

int main(){
    int amount,num,numC=0,numR=0,numS=0,total=0;
    char name;
    scanf("%d",&amount);
    for (int i = 0; i < amount; i++)
    {
        scanf("%d %c",&num,&name);
        if (name=='C')
        {
            numC = numC+num;
        }
        if (name=='R')
        {
            numR = numR+num;
        }if (name=='S')
        {
            numS = numS+num;
        }
        total = numC+numR+numS;
    }
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",numC);
    printf("Total de ratos: %d\n",numR);
    printf("Total de sapos: %d\n",numS);
    float perC=(((float)numC/(float)total)*100);
    float perR=(((float)numR/(float)total)*100);
    float perS=(((float)numS/(float)total)*100);
    printf("Percentual de coelhos: %0.2f %%\n",perC);
    printf("Percentual de ratos: %0.2f %%\n",perR);
    printf("Percentual de sapos: %0.2f %%\n",perS);
    return 0;
}