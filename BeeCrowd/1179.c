#include<stdio.h>

int main(){
    int num,par[5],impar[5],a=0,b=0;
    for(int i=1;i<=15;i++){
        scanf("%d",&num);
        if(num%2==0){
            par[a]=num;
            a++;
        }
        else if(num%2!=0){
            impar[b]=num;
            b++;
        }
        if(a==5){
            for(int i=0;i<5;i++){
                printf("par[%d] = %d\n",i,par[i]);
            }
            a=0;
        }
        if(b==5){
            for(int i=0;i<5;i++){
                printf("impar[%d] = %d\n",i,impar[i]);
            }
            b=0;
        }
    }
    for(int i=0;i<b;i++){
        printf("impar[%d] = %d\n",i,impar[i]);
    }
    for(int i=0;i<a;i++){
        printf("par[%d] = %d\n",i,par[i]);
    }
    return 0;
}