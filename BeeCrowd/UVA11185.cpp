#include<stdio.h>

int main(){
    int num,ans[64];
    for(int k=0;k<100;k++){
        scanf("%d",&num);
        if(num<0){
            break;
        }
        int i=0;
        while(num!=0){
            ans[i]=num%3;
            num=num/3;
            if(num==0){
                break;
            }
            i++;
        }
        for(int j=i;j>=0;j--){
            printf("%d",ans[j]);
        }
        printf("\n");
    }
    return 0;
}