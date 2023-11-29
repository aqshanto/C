/*Practice Qs 55
    Write a program to store the data of 3 students.*/

#include<stdio.h>
#include<string.h>

struct student{
    char name[100];
    int roll;
    float cgpa;
};

int main(){    
    struct student s2;
    strcpy(s2.name, "mehedi");
    s2.roll = 12214069;
    s2.cgpa = 8.45;

    printf("Student name is %s\n", s2.name);
    printf("student roll is %d\n", s2.roll);
    printf("Student cgpa is %f\n", s2.cgpa);
    printf("\n");

    struct student s3;
    strcpy(s3.name, "tanvir");
    s3.roll = 12214070;
    s3.cgpa = 9.22;

    printf("student name is %s\n", s3.name);
    printf("student roll is %d\n", s3.roll);
    printf("Student cgpa is %f\n", s3.cgpa);
    printf("\n");

    struct student s1;
    strcpy(s1.name, "shanto");
    s1.roll = 12214071;
    s1.cgpa = 10.00;

    printf("Student name is %s\n", s1.name);
    printf("Student roll is %d\n", s1.roll);
    printf("Student cgpa is %f\n", s1.cgpa);
    return 0;
}