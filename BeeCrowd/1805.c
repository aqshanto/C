#include<stdio.h>

int main(){
    int A,B;
    int sum=0;
    scanf("%d %d", &A ,&B);
    for (int i=A; i<=B; i++){
        sum =sum +A;
        A++;
    }
    printf("%d\n",sum);
    return 0;
}