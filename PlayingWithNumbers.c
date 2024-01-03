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

    for(int i=0;i<=32-count; i++){
        printf("%d", 0);
    }
    printf("%d\n", bin);
    printf("Number of 1s is %d\n", count);

    int n;
    printf("Number of Candidate:");
    scanf("%d",&n);

    for(int i=0; i<n; i++){
    printf("Enter your Candidates number:");
    scanf("%d",&num);
    int bin =0, rem =0, place =1,count=0;
    while (num!=0)
    {
        rem     = num%2;
        num     = num/2;
        bin     = bin+(rem*place);
        place   = place*10;
        count   = count+rem;
    }
    for(int i=0;i<=32-count; i++){
        printf("%d", 0);
    }
    printf("%d\n", bin);
    printf("Number of 1s is %d\n", count);
    }


    return 0;
}