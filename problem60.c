/*Practice Qs 60
    Make a structure to store Bank Account Information of a
    customer of ABC Bank. Also, make an alias for it.*/

#include<stdio.h>
#include<string.h>

typedef struct BankAccount{
    int accountNo;
    char name[100];
}acc;

int main(){
    acc A1 ={132, "Shanto"};
    acc A2 ={124, "AQ Shanto"};
    acc A3 ={125, "Abdul Quym"};

    printf("Acoount no is: %d\n", A1.accountNo);
    printf("Account Holder name si : %s", A1.name);

    return 0;
}