#include<stdio.h>

int main(){
    int day, days , years, months;
    scanf("%d",&days);
    years = days/365;
    months = (days%365)/30;
    day = (days%365)%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, months,day);
    return 0;
}