#include<stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    int reminder1=num%10;
    num/=10;
    int reminder2=num%10;
    if(reminder1%reminder2==0 || reminder2%reminder1==0){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}