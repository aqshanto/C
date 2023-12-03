/*Practice Qs 64
    2 Number -a & b, are written in a file. Write a program to
    replace them with their sum.*/


#include<stdio.h>
#include<string.h>

int main(){
    FILE *fptr;
    fptr = fopen("sum.txt", "r");
    int a,b;
    fscanf(fptr, "%d", &a);
    fscanf(fptr, "%d", &b);
    int sum = a+b;
    fclose(fptr);
    
    fptr = fopen ("sum.txt", "w");
    fprintf(fptr, "%d", sum);
    fclose(fptr);
    return 0;
}