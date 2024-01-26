#include<stdio.h>

int main(){
    float x ,salary, earned, percentage;
    scanf("%f", &x);
    if(x>=0 && x<=400.00){
        earned = x*0.15;
        salary = x+earned;
    printf("Novo salario: %.2f\n", salary);
    printf("Reajuste ganho: %.2f\n", earned);
    printf("Em percentual: 15 %%\n");
    }
    else if(x>=400.01 && x<=800.00){
        earned = x*0.12;
        salary = x+earned;
    printf("Novo salario: %.2f\n", salary);
    printf("Reajuste ganho: %.2f\n", earned);
    printf("Em percentual: 12 %%\n");
    }
    else if(x>=800.01 && x<=1200.00){
        earned = x*0.10;
        salary = x+earned;
    printf("Novo salario: %.2f\n", salary);
    printf("Reajuste ganho: %.2f\n", earned);
    printf("Em percentual: 10 %%\n");
    }
    else if(x>=1200.01 && x<=2000.00){
        earned = x*0.07;
        salary = x+earned;
    printf("Novo salario: %.2f\n", salary);
    printf("Reajuste ganho: %.2f\n", earned);
    printf("Em percentual: 7 %%\n");
    }
    else if(x>2000.00){
        earned = x*0.04;
        salary = x+earned;
    printf("Novo salario: %.2f\n", salary);
    printf("Reajuste ganho: %.2f\n", earned);
    printf("Em percentual: 4 %%\n");
    }
    return 0;
}