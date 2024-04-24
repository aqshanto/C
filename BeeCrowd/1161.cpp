#include<stdio.h>

int main(){
    int m,n;
    while(scanf("%d %d",&m,&n)!=EOF){
        long long int multi=1;
        for(int i=1;i<=m;i++){
            multi=multi*i;
        }
        long long int sum1=multi;
        long long int multi1=1;
        for(int i=1;i<=n;i++){
            multi1=multi1*i;
        }
        long long int sum2=multi1;
        printf("%lld\n",sum1+sum2);
    }
    return 0;
}