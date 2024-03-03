#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            for(int j=1;j<=i;j++){
                printf("#");
            }
            for(int j=1;j<=(2*n-2*i);j++){
                printf(" ");
            }
            for(int j=1;j<=i;j++){
                printf("&");
            }
            printf("\n");
        }
        else if(i%2==0){
            for(int j=1;j<=i;j++){
                printf("&");
            }
            for(int j=1;j<=(2*n-2*i);j++){
                printf(" ");
            }
            for(int j=1;j<=i;j++){
                printf("#");
            }
            printf("\n");
        }
        
    }
    return 0;
}