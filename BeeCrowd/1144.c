#include<stdio.h>
#include<math.h>

int main(){
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        int a ,b, c;
        a = pow(i,1);
        b = pow(i,2);
        c = pow(i,3);
        printf("%d %d %d\n", a , b,c);
        printf("%d %d %d\n", a , b+1,c+1);
    }
    
    return 0;
}