//https://www.hackerrank.com/contests/practice-1713096494/challenges/what-are-the-divisors
#include<stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        if(num%i==0){
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}