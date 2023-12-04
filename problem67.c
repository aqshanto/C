/*Practice Qs 67
    In Qs 65, free the memory allocated with calloc.*/


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

    free(ptr);
    ptr = (float*)calloc(3, sizeof(float));
    for(int i =0; i<3; i++){
        printf("%f\n", ptr[i]);
    }
    return 0;
}