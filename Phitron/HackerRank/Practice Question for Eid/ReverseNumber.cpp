#include<stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    while (num!=0)
    {
        int reminder =num%10;
        num/=10;
        printf("%d",reminder);
    }
    printf("\n");
    return 0;
}