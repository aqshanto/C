#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    float *ptr;
    ptr =(float*) calloc(5 , sizeof(float));
    for (int i =0; i<5; i++){
        printf("%f\n", ptr[i]);
    }
	free(ptr);
    ptr = (int*) calloc(2, sizeof(int));
    for (int i =0; i<5; i++){
        printf("%f\n", ptr[i]);
    }
    return 0;
}