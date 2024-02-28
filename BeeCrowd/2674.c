#include<stdio.h>

int checkprime(int num);
int finddigit(int num);

int main() {
    int num;
    scanf("%d", &num);
    int isPrime = checkprime(num);
    printf("%d", isPrime);
    if (isPrime == 0) {
        printf("Nada\n");
    } else if (isPrime == 1) {
        while (num != 0) {
            printf("%d", finddigit(num));
            if (checkprime(finddigit(num)) == 0) {
                printf(" Prime\n");
            }
            num = num / 10;
        }
        if (checkprime(finddigit(num)) == 1) {
            printf(" Super\n");
        }
    }
    return 0;
}

int checkprime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int finddigit(int num) {
    int digit;
    digit = num % 10;
    return digit;
}
