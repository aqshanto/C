#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    int test;
    while (scanf("%d",&test)!=EOF){
        char str[test][10];
        for(int i=0;i<test;i++){
            scanf("%s",str[i]);
            int lenA=strlen(str[i]);
            int j=0,k=lenA-1;
            while(j<k){
                int temp=str[i][j];
                str[i][j]=str[i][k];
                str[i][k]=temp;
                j++;
                k--;
            }
        }
        for(int i=0;i<test;i++){
            int len=strlen(str[i]);
            int sum=0;
            for(int j=len-1;j>=0;j--){
                if(str[i][j]=='1'){
                    double result=pow(2,j);
                    sum+=(int)result;
                }
            }
            printf("%c",sum);
        }
        printf("\n");
    }
    return 0;
}
