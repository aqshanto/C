#include<stdio.h>

int main(){
    int bin =0, rem =0, place =1;
    int qnum;
    printf("Enter your Query number:");
    scanf("%d",&qnum);
    while (qnum)
    {
        rem     = qnum%2;
        qnum    = qnum/2;
        bin     = bin+(rem*place);
        place   = place*10;
    }
    printf("%d\n", bin);
    int num1, num2, num3;
    printf("Enter your Candidates numbers:");
    scanf("%d %d %d",&num1, &num2, &num3);
    int bin1 =0, rem1 =0, place1 =1;
    while (num1!=0)
    {
        rem1     = num1%2;
        num1    = num1/2;
        bin1     = bin1+(rem1*place1);
        place1   = place1*10;
    }
    printf("%d\n", bin1);
    int bin2 =0, rem2 =0, place2 =1;
    while (num2!=0)
    {
        rem2     = num2%2;
        num2    = num2/2;
        bin2     = bin2+(rem2*place2);
        place2   = place2*10;
    }
    printf("%d\n", bin2);
    int bin3 =0, rem3 =0, place3 =1;
    while (num3!=0)
    {
        rem3     = num3%2;
        num3    = num3/2;
        bin3     = bin3+(rem3*place3);
        place3   = place3*10;
    }
    printf("%d\n", bin3);
    for(int i=0; i<=sizeof(qnum);i++){
        if()
    }
    
    return 0;
}