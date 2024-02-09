#include<stdio.h>

int main(){
    int N ,a ,b;
    float result;
    scanf("%d", &N);
    for(int i =0; i<N; i++){
        scanf("%d %d", &a ,&b);
        if(b ==0){
            printf("divisao impossivel\n");
        }
        else{
            result = ((a*1.0)/(b*1.0));
            printf("%0.1f\n", result);
        }
    }
    return 0;
}