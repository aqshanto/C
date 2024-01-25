#include<stdio.h>

int main(){
    int EmpNum, hour;
    float salary;
    scanf("%d %d %f", &EmpNum , &hour , &salary);
    printf("NUMBER = %d\n", EmpNum);
    printf("SALARY = U$ %.2f\n", hour*salary);
    return 0;
}