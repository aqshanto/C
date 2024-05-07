#include <stdio.h>
#include <math.h>

int main() {
    long long int S, P;
    scanf("%lld %lld", &S, &P);
    int count=0;
    for(int i=1;i<=sqrt(P);i++){
        if(P%i==0){
            int M=P/i;
            if (M+i==S){
                count=1;
                printf("Yes\n");
                break;
            }
        }
    }
    if(count==0){
        printf("No\n");
    }
    return 0;
}
