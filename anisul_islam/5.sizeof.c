#include<stdio.h>

int main(){
    int i;
    char c;
    float f;
    double d;

    printf("the size of int is %d bytes\n", sizeof(i));
    printf("the size of char is %d byte\n", sizeof(c));
    printf("the size of float is %d bytes\n", sizeof(f));
    printf("the size of double is %d bytes\n", sizeof(d));
    
    return 0;
}