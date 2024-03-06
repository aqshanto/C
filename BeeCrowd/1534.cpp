#include<stdio.h>

int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(j==(n-i+1)){
                    printf("2");
                }
                else if(i==j){
                    printf("1");
                }
                else{
                    printf("3");
                }
            }
            printf("\n");
        }
    }
    //check;
    return 0;
}