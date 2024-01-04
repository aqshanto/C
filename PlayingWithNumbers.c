#include<stdio.h>

int main(){
    int bin =0, rem =0, place =1,q=0;
    int num;
    printf("Enter your Query number:");
    scanf("%d",&num);
    while (num)
    {
        rem     = num%2;
        num     = num/2;
        bin     = bin+(rem*place);
        place   = place*10;
        q   = q+rem;
    }

    for(int i=0;i<=32-q; i++){
        printf("%d", 0);
    }
    printf("%d\n", bin);
    printf("Number of 1s is %d\n", q);

    int n;
    printf("Number of Candidate:");
    scanf("%d",&n);

    int maximum, minimum, diff;
    for(int i=0; i<n; i++){
    printf("Enter your Candidates number:");
    scanf("%d",&num);
    int bin =0, rem =0, place =1,c=0;
    while (num!=0)
    {
        rem     = num%2;
        num     = num/2;
        bin     = bin+(rem*place);
        place   = place*10;
        c   = c+rem;
    }
    for(int i=0;i<=32-c; i++){
        printf("%d", 0);
    }
    printf("%d\n", bin);
    printf("Number of 1s is %d\n", c);
    diff = q-c;
    if(c>q){
        maximum=c;
    }
    if(c<q){
        minimum=c;
    }
    }
    printf("Number with Minimum %d", minimum);
    return 0;
}