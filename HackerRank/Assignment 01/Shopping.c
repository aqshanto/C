#include <stdio.h>

int main() {
    long long int a;
    scanf("%lld",&a);
    if(a>=1500){
        printf("I will Buy Punjabi\n");
        printf("I will buy new shoes\n");
        printf("Alisa will buy new shoes\n");
    }
    else if(a>1000){
        printf("I will Buy Punjabi\n");
    }
    else if(a<=1000){
        printf("Bad luck!\n");
    }
    
    return 0;
}
