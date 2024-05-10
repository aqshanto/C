#include <stdio.h>
#include <math.h>

int main(){
    int test;
    long long int num;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        scanf("%lld",&num);
        int row= (-1+sqrt(1+(8*num)))/2;
        printf("%d\n",row);       
    }
    return 0;
}