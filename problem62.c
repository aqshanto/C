/*Practice Qs 62
    Make a program to input student info from a user & enter it to a file.*/


#include<stdio.h>
#include<string.h>

int main(){
    FILE *fptr;
    fptr = fopen("stuinfo.txt" , "w");
    char name[100];
    int age;
    float cgpa;
    printf("enter name: ");
    scanf("%s", &name);
    printf("enter age: ");
    scanf("%d", &age);
    printf("enter cgpa: ");
    scanf("%f", &cgpa);


    fprintf(fptr , "%s:  ", name);
    fprintf(fptr , "%d, ", age);
    fprintf(fptr , "%f; \n", cgpa);



    fclose(fptr);
}