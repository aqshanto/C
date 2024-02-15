#include<stdio.h>

int main(){
    int a;
    int b=0,c=0,d=0,e=0;
    for(int i=0;i<5;i++){
        scanf("%d",&a);
        if(a>0){
            c++;
        }if(a<0){
            e++;
        }if(a%2==0){
            b++;
        }if(a%2!=0){
            d++;
        }
    }
    printf("%d valor(es) par(es)\n",b);
    printf("%d valor(es) impar(es)\n",d);
    printf("%d valor(es) positivo(s)\n",c);
    printf("%d valor(es) negativo(s)\n",e);
    return 0;
}