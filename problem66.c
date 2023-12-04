/*Practice Qs 66
    WAP(Write a Program) to allocate the memory size of n, where n is entered bt the user. */


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int n;
    printf("enter n:");
    scanf("%d", &n);
    float *ptr;
    ptr = (float*) malloc(n * sizeof(float));

    for (int i =0; i<5; i++){
        printf("%f\n", ptr[i]);
    }
    return 0;
}