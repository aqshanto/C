#include<stdio.h>
#include<string.h>

int main(){
    int test;
    scanf("%d",&test);
    for (int i = 0; i < test; i++){
        char A[1005];
        char B[1005];
        scanf("%s %s",A,B);
        int lenA=strlen(A);
        int lenB=strlen(B);
        if(lenA>=lenB){
            int count=1;
            int j=lenA;
            for(int i=lenB;i>=0;i--){
                if(A[j]!=B[i]){
                    count=0;
                    printf("nao encaixa\n");
                    break;
                }
                j--;
            }
            if(count==1){
                printf("encaixa\n");
            }
        }
        else{
            printf("nao encaixa\n");
        }
    }
    
    return 0;
}