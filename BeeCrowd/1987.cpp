#include<stdio.h>

int main(){
    int n,m;
    while(scanf("%d %d",&n,&m)!=EOF){
        int sum=0;
        while(m!=0){
            int reminder=m%10;
            sum+=reminder;
            m/=10;
        }
        if(sum%3==0){
            printf("%d sim\n",sum);
        }else{
            printf("%d nao\n",sum);
        }
    }
    
    return 0;
}