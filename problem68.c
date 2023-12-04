/*Practice Qs 68
    Allocate memory for 5 numbers.Then dynamically increase it to 8 numbers.*/


#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(){
    int *ptr;
    ptr = (int*) calloc( 5, sizeof(int));
    printf("enter 5 numbers:");
    for (int i =0;i <5; i++){
        scanf("%d", &ptr[i]);
    }
    for (int i =0;i <5; i++){
        printf("number %d is %d\n", i , ptr[i]);
    }
    ptr = realloc(ptr , 8);
    printf("enter 8 numbers:");
    for (int i =0;i <8; i++){
        scanf("%d", &ptr[i]);
    }
    for (int i =0;i <8; i++){
        printf("number %d is %d\n", i , ptr[i]);
    }
    return 0;
}