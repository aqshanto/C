#include<stdio.h>

int main(){
    int A,B;
    long long int sum=0;
    scanf("%d %d", &A ,&B);
    for (int i=A; i<=B; i++){
        sum =sum +i;
    }
    printf("%lld\n",sum);
    return 0;
}