/*Practice Qs 61
    Make a program to read 5 integer from a file.*/

#include<stdio.h>
#include<string.h>

int main(){
    FILE *fptr;
    fptr = fopen("test.txt", "r");
    int num;
    fscanf(fptr, "%d", &num);
    printf("%d\n", num);
    fscanf(fptr, "%d", &num);
    printf("%d\n", num);
    fscanf(fptr, "%d", &num);
    printf("%d\n", num);
    fscanf(fptr, "%d", &num);
    printf("%d\n", num);
    fscanf(fptr, "%d", &num);
    printf("%d\n", num);
    
    fclose(fptr);
    return 0;
}