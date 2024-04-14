//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/S
#include<stdio.h>

int main(){
    double num;
    scanf("%lf",&num);
    if(num>=0 && num<=25)
        printf("Interval [0,25]\n");
    else if(num>25 && num<=50)
        printf("Interval (25,50]\n");
    else if(num>50 && num<=75)
        printf("Interval (50,75]\n");
    else if(num>75 && num<=100)
        printf("Interval (75,100]\n");
    else
        printf("Out of Intervals\n");
    return 0;
}