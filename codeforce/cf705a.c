#include<stdio.h>
int main(){
    int a,i;
    scanf("%d",&a);
    if (a==1){
        printf("I hate it");
    }else if (a>1)
    {
        for ( i = 1; i <a; i++){
        printf("I ");
        if (i%2==0){
            printf("love ");
        }
        if (i%2!=0){
            printf("hate ");
        }
        printf("that ");
    }
        printf("I ");
        if (i%2==0){
            printf("love ");
        }if (i%2!=0){
            printf("hate ");
        }
        printf("it\n");
    }
    
    
    
    return 0;
}