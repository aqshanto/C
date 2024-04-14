#include<stdio.h>

int main(){
    int num,i,j,amount=0;
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        if(num%i==0){
            int count=0;
            for(j=1;j<=i;j++){
                if(i%j==0){
                    count++;
                }
            }
            if(count==2){
                printf("%d ",i);
                amount++;
            }
        }
    }
    if(amount==0){
        printf("-1");
    }
    printf("\n");
    return 0;
}