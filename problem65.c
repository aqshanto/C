/*Practice Qs 65
    WAP(Write a Program) to allocate memory to store 5 prices.*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    float *ptr;
    ptr = (float*) malloc(5 * sizeof(float));

    ptr[0] = 110.6;
    ptr[1] = 112.6;
    ptr[2] = 116.6;
    ptr[3] = 114.6;
    ptr[4] = 115;

    for (int i =0; i<5; i++){
        printf("%f\n", ptr[i]);
    }
    return 0;
}