#include<stdio.h>

int main(){
    int a,n100,n50,n20,n10,n5,n2,n1,extra;
    scanf("%d",&a);
    n100 = a/100;
    extra = a%100;
    n50 = extra /50;
    extra = extra%50;
    n20 = extra /20;
    extra = extra %20;
    n10 = extra/10;
    extra = extra %10;
    n5 = extra/5;
    extra = extra%5;
    n2 = extra/2;
    extra = extra%2;
    n1 = extra/1;
    printf("%d\n",a);
    printf("%d nota(s) de R$ 100,00\n",n100);
    printf("%d nota(s) de R$ 50,00\n",n50);
    printf("%d nota(s) de R$ 20,00\n",n20);
    printf("%d nota(s) de R$ 10,00\n",n10);
    printf("%d nota(s) de R$ 5,00\n",n5);
    printf("%d nota(s) de R$ 2,00\n",n2);
    printf("%d nota(s) de R$ 1,00\n",n1);

    return 0;
}