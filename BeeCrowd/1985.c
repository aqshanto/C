#include<stdio.h>

int main(){
    int p,q,code;
    float price1=0,price2=0,price3=0,price4=0,price5=0,sum=0;
    scanf("%d",&p);
    for(int i=0;i<p;i++){
        scanf("%d %d",&code,&q);
        if(code==1001){
            price1=0;
            price1= 1.50*q;
        }if(code==1002){
            price2=0;
            price2= 2.50*q;
        }if(code==1003){
            price3=0;
            price3= 3.50*q;
        }if(code==1004){
            price4=0;
            price4= 4.50*q;
        }if(code==1005){
            price5=0;
            price5= 5.50*q;
        }
        sum = price1+price2+price3+price4+price5;
    }
    printf("%0.2f\n",sum);
    return 0;
}