#include<stdio.h>

int main(){
    int test;
    scanf("%d",&test);
    int num[test];
    for(int i=0;i<test;i++){
        int sum=0;
        scanf("%d",&num[i]);
        for(int j=1;j<num[i];j++){
            if(num[i]%j==0){
                sum+=j;
            }
        }
        if(sum==num[i]){
            printf("%d eh perfeito\n",num[i]);
        }else{
            printf("%d nao eh perfeito\n",num[i]);
        }
    }

    return 0;
}