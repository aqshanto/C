#include<stdio.h>

int main(){
    int test;
    while(scanf("%d",&test)!=EOF){
        int code[test];
        for(int i=0;i<test;i++){
            scanf("%d",&code[i]);
        }
        for(int i=0;i<(test-1);i++){
            for(int j=i+1;j<test;j++){
                if(code[i]>code[j]){
                    int temp=code[i];
                    code[i]=code[j];
                    code[j]=temp;
                }
            }
        }
        for(int i=0;i<test;i++){
            printf("%04d\n",code[i]);
        }
    }
    //check
    return 0;
}