#include<stdio.h>

int main(){
    int n,casenum=1;
    while (scanf("%d",&n)!=EOF){
        int total= ((n*(n+1))/2)+1;
        if(total==1){
            printf("Caso %d: %d numero\n",casenum,total);
        }else
            printf("Caso %d: %d numeros\n",casenum,total);
        casenum++;
        printf("0");
        for(int i=0;i<=n;i++){
            for(int j=0;j<=i-1;j++){
                printf(" %d",i);
            }
        }
        printf("\n");
        printf("\n");
    }
    return 0;
}