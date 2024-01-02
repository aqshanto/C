#include<stdio.h>

int main(){
    int a,b;
    printf("Enter your First Number:");
    scanf("%d", &a);
    printf("Enter your Second Number:");
    scanf("%d", &b);
    int q;
    q = a/b;
    int r;
    r = a- (b*q); //Divisor *Quotient +Remainder = Dividend
    printf("The Reminder when %d is divided by %d  is %d\n",a ,b ,r);
// Easy way:
    int Reminder;
    Reminder = a%b;
    printf("The reminder is %d with easy method", Reminder);
    return 0;
}