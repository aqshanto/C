#include<stdio.h>

int main(){
    char d1, d2, s1, m1, m2, s2, y1, y2;
    scanf("%c%c%c%c%c%c%c%c",&d1, &d2, &s1, &m1, &m2, &s2, &y1, &y2);
    printf("%c%c%c%c%c%c%c%c\n", m1, m2, s2, d1, d2, s1, y1, y2);
    printf("%c%c%c%c%c%c%c%c\n", y1, y2, s1, m1, m2, s2, d1, d2);
    printf("%c%c-%c%c-%c%c\n", d1, d2, m1, m2, y1, y2);
    return 0;
}