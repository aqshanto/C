#include<stdio.h>
#include<string.h>

int main(){
    long long int num;
    scanf("%lld",&num);
    for(int i=0;;i++){
        int reminder = num%10;
        printf("%d",reminder);
        num/=10;
        if(num==0){
            printf("\n");
            break;
        }
    }
    return 0;
}