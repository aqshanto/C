#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==n){
                printf("@");
            }
            else if(i==j){
                printf("@");
            }
            else if((j==1 && i!=1 && i!=n) || (j==n && i!=1 && i!=n)){
                printf("@");
            }
            else if(j==(n-i+1)){
                printf("@");
            }
            else{
                printf(" ");
            }
                     
        }
        printf("\n");
    }
    return 0;
}