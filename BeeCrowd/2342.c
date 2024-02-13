#include<stdio.h>

int main(){
    int n,p,q,sum,multiple;
    char sign;
    scanf("%d",&n);
    scanf("%d %c %d",&p,&sign,&q);
    if(sign =='+'){
        sum =p + q;
        if(sum <=n){
            printf("OK\n");
        }else{
            printf("OVERFLOW\n");
        }
    }else if(sign =='*'){
        multiple = p*q;
        if(multiple <=n){
            printf("OK\n");
        }else{
            printf("OVERFLOW\n");
        }
    }
    
    return 0;
}