#include<stdio.h>
int main(){
    float num;
    scanf("%f",&num);
    if(num>=80 && num <100){
        printf("Your Grade is A+\n");
    }
    else if (num < 80 && num >=75){
        printf("Your Grade is A\n");
    }
    else if (num < 75 && num >=70){
        printf("Your Grade is A-\n");
    }
    else if (num < 70 && num >=65){
        printf("Your Grade is B+\n");
    }
    else if (num < 65 && num >=60){
        printf("Your Grade is B\n");
    }
    else if (num < 60 && num >=55){
        printf("Your Grade is B-\n");
    }
    else if (num < 55 && num >=50){
        printf("Your Grade is C+\n");
    }
    else if (num < 50 && num >=45){
        printf("Your Grade is C\n");
    }
    else if (num < 45 && num >=40){
        printf("Your Grade is D\n");
    }
    else if (num < 40 && num >=0){
        printf("Your Grade is F\n");
    }
    else{
        printf("Invalid Number\n");
    }
    return 0;
}