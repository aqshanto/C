#include<stdio.h>

int main(){
    int A =10;
    int B = 15;
    int C =5;
    int D = 20;
    int math1, math2, math3 ,math4, math5;
    math1 = (A = A * B + D / C + + + C - - - D);
    math2 = (B += A & B | C * A * D / B && C);
    math3 = (C*= A | B || C && D & A );
    math4 = (A = A + B * C / D % C+++ B+++ A* B) ;
    math5 = (D = A + B == C >= D && B);
    printf("%d\n", math1);
    printf("%d\n", math2);
    printf("%d\n", math3);
    printf("%d\n", math4);
    printf("%d\n", math5);
    return 0;
}