#include<stdio.h>

int main(){
    int test,num;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        scanf("%d",&num);
        int count=0;
        for(int i=2;i<num;i++){
            if(num%i==0){
                count=1;
            }
        }
        if(count==0){
            printf("%d eh primo\n",num);
        }else{
            printf("%d nao eh primo\n",num);
        }
    }
    return 0;
}