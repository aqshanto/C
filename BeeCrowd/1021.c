#include<stdio.h>
#include<math.h>

int main(){
    float money , extra;
    scanf("%f", &money);
    int a, b, c, d, e, f ;

    a = money / 100;
    extra = fmod(money,100);
    b = extra / 50;
    extra = fmod(extra, 50);
    c = extra / 20;
    extra = fmod(extra, 20);
    d = extra / 10;
    extra = fmod(extra, 10);
    e = extra / 5;
    extra = fmod(extra , 5);
    f = extra / 2;
    extra = fmod(extra , 2);

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", a);
    printf("%d nota(s) de R$ 50.00\n", b);
    printf("%d nota(s) de R$ 20.00\n", c);
    printf("%d nota(s) de R$ 10.00\n", d);
    printf("%d nota(s) de R$ 5.00\n", e);
    printf("%d nota(s) de R$ 2.00\n", f);

    int g , h , i , j , k ,l;
    g = extra /1;
    extra = fmod(extra, 1);
    h = extra /0.50;
    extra = fmod(extra,0.50);
    i = extra /0.25;
    extra = fmod(extra, 0.25);
    j = extra /0.10;
    extra = fmod(extra, 0.10);
    k = extra /0.05;
    extra = fmod(extra, 0.05);
    l = extra /0.01;

    printf("MOEDAS:\n");
    printf("%d nota(s) de R$ 1.00\n", g);
    printf("%d nota(s) de R$ 0.50\n", h);
    printf("%d nota(s) de R$ 0.25\n", i);
    printf("%d nota(s) de R$ 0.10\n", j);
    printf("%d nota(s) de R$ 0.05\n", k);
    printf("%d nota(s) de R$ 0.01\n", l);

    return 0;
}