#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=n;;i++){
        if(i%n==1 && i%2==1){
            printf("%d",i);
            break;
        }
    }
    return 0;
}