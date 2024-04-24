#include<stdio.h>

int main(){
    int test;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        float n;
        scanf("%f",&n);
        int count=0;
        while(n > 1){
            n=n/2.0;
            count++;
        }
        printf("%d dias\n",count);
    }
    return 0;
}