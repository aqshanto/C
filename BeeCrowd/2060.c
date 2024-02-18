#include<stdio.h>

int main(){
    int n,l,d2=0,d3=0,d4=0,d5=0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        scanf("%d",&l);
        if (l%2==0)
        {
            d2++;
        }
        if (l%3==0)
        {
            d3++;
        }if (l%4==0)
        {
            d4++;
        }if (l%5==0)
        {
            d5++;
        }
    }
    printf("%d Multiplo(s) de 2\n",d2);
    printf("%d Multiplo(s) de 3\n",d3);
    printf("%d Multiplo(s) de 4\n",d4);
    printf("%d Multiplo(s) de 5\n",d5);
    return 0;
}