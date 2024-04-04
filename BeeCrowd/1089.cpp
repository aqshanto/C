#include<stdio.h>

int main(){
    int n,num[10010],j,count;
    for(int i=0;;i++){
        scanf("%d",&n);
        if(n==0){
            break;
        }
        for(j=1;j<=n;j++){
            scanf("%d",&num[j]);
        }
        num[0]=num[n-1];
        num[n+1]=num[1];
        count=0;
        for(int k=0;k<(n+1);k++){
            if((num[k+1]<num[k] && num[k+1]<num[k+2]) || (num[k+1]>num[k] && num[k+1]>num[k+2])){
                //printf("ok %d\n",k);
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}