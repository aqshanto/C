#include<stdio.h>
int main(){
    int t,n;
    while (1){
        scanf("%d %d",&t,&n);
        if(t==0 && n==0) break;
        char ch[1000];
        int point;
        int sum=0;
        for(int i=0;i<t;i++){
            scanf("%s %d",ch,&point);
            sum+=point;
        }
        printf("%d\n",n*3-sum);
    }
    
}