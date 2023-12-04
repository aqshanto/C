/*Practice Qs 70
    Allocate memory to store first 5 odd numbers, then reallocate it to store first 6 even number.*/


#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int*)calloc(5, sizeof(int));
    ptr[0]=1;
    ptr[1]=3;
    ptr[2]=5;
    ptr[3]=7;
    ptr[4]=9;

    for (int i = 0; i < 5; i++)
    {
        printf("first %d odd numbers are %d\n", i , ptr[i]);
    }

    ptr = realloc(ptr, 6);
    ptr = (int*)calloc(6, sizeof(int));
    ptr[0]=0;
    ptr[1]=2;
    ptr[2]=4;
    ptr[3]=6;
    ptr[4]=8;
    ptr[5]=10;

    for (int i = 0; i < 6; i++)
    {
        printf("first %d odd numbers are %d\n", i , ptr[i]);
    }
    
}