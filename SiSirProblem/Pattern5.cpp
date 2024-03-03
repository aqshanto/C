#include<stdio.h>

int main(){
    int a,n;
    scanf("%d",&a);
    n=(a+1)/2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
            printf(" ");
        }
        for(int j=1;j<=(2*i-1);j++){
            printf("*");
        }
        for(int j=1;j<=(n-i);j++){
            printf(" ");
        }
        for(int j=1;j<=(n-i);j++){
            printf(" ");
        }
        for(int j=1;j<=(2*i-1);j++){
            printf("*");
        }
        printf("\n");
    }
    int m=a-n;
    for(int i=m;i>=1;i--){
        for(int j=i;j<=(n-1);j++){
            printf(" ");
        }
        for(int j=1;j<=(2*i-1);j++){
            printf("*");
        }
        for(int j=i;j<=(n-1);j++){
            printf(" ");
        }
        for(int j=i;j<=(n-1);j++){
            printf(" ");
        }
        for(int j=1;j<=(2*i-1);j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}