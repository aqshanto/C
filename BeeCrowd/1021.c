#include<stdio.h>
#include<math.h>

int main(){
    float money , extra;
    scanf("%f", &money);
    int a, b, c, d, e, f ;
    
    money = money * 100;
    a = money / 10000;
    extra = fmod(money,10000);
    b = extra / 5000;
    extra = fmod(extra, 5000);
    c = extra / 2000;
    extra = fmod(extra, 2000);
    d = extra / 1000;
    extra = fmod(extra, 1000);
    e = extra / 500;
    extra = fmod(extra , 500);
    f = extra / 200;
    extra = fmod(extra , 200);

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", a);
    printf("%d nota(s) de R$ 50.00\n", b);
    printf("%d nota(s) de R$ 20.00\n", c);
    printf("%d nota(s) de R$ 10.00\n", d);
    printf("%d nota(s) de R$ 5.00\n", e);
    printf("%d nota(s) de R$ 2.00\n", f);

    int g , h , i , j , k ,l;
    g = extra /100;
    extra = fmod(extra, 100);
    h = extra /50;
    extra = fmod(extra,50);
    i = extra /25;
    extra = fmod(extra, 25);
    j = extra /10;
    extra = fmod(extra, 10);
    k = extra /5;
    extra = fmod(extra, 5);
    l = extra /1;

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", g);
    printf("%d moeda(s) de R$ 0.50\n", h);
    printf("%d moeda(s) de R$ 0.25\n", i);
    printf("%d moeda(s) de R$ 0.10\n", j);
    printf("%d moeda(s) de R$ 0.05\n", k);
    printf("%d moeda(s) de R$ 0.01\n", l);

    return 0;
}