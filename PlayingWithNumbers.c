#include<stdio.h>

int main(){
    int bin =0, rem =0, place =1,count=0;
    int num;
    printf("Enter your Query number:");
    scanf("%d",&num);
    while (num)
    {
        rem     = num%2;
        num     = num/2;
        bin     = bin+(rem*place);
        place   = place*10;
        count   = count+rem;
    }
    
    printf("%d\n", bin);
    printf("%d\n", count);
    int num1, num2, num3;
    printf("Enter your Candidates numbers:");
    scanf("%d %d %d",&num1, &num2, &num3);
    int bin1 =0, rem1 =0, place1 =1, count1=0;
    while (num1!=0)
    {
        rem1     = num1%2;
        num1     = num1/2;
        bin1     = bin1+(rem1*place1);
        place1   = place1*10;
        count1   = count1+rem1;
    }
    printf("%d\n", bin1);
    printf("%d\n", count1);
    int bin2 =0, rem2 =0, place2 =1, count2=0;
    while (num2!=0)
    {
        rem2     = num2%2;
        num2     = num2/2;
        bin2     = bin2+(rem2*place2);
        place2   = place2*10;
        count2   = count2+rem2;
    }
    printf("%d\n", bin2);
    printf("%d\n", count2);
    int bin3 =0, rem3 =0, place3 =1, count3=0;
    while (num3!=0)
    {
        rem3     = num3%2;
        num3     = num3/2;
        bin3     = bin3+(rem3*place3);
        place3   = place3*10;
        count3   = count3+rem3;
    }
    printf("%d\n", bin3);
    printf("%d\n", count3);

    int diff1, diff2,diff3;
    diff1 = count - count1;
    diff2 = count - count2;
    diff3 = count - count3;

    if(diff1>=diff2){
        printf("Number with Maximum Difference: %d", num1);
    }
    else{
        if(diff2>diff3){
            printf("Number with Maximum Difference: %d", num2);
        }
        else{
        printf("Number with Maximum Difference: %d", num3);
        }
    }
    return 0;
}