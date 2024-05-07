#include <stdio.h>
#include <math.h>

int prime(int num) {
    if (num<=1) {
        return 0;
    }
    for (int i=2;i<=sqrt(num);i++) {
        if (num%i==0) {
            return 0;
        }
    }
    return 1;
}

int nth_prime(int n) {
    int count = 0;
    int num = 2;
    while (count < n) {
        if (prime(num)) {
            count++;
        }
        num++;
    }
    return num-1;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n",nth_prime(n));
    return 0;
}
