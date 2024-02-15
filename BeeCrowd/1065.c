#include<stdio.h>

int main(){
    int a;
    int b=0;
    for(int i=0;i<5;i++){
        scanf("%d",&a);
        if(a%2==0){
            b++;
        }
    }
    printf("%d valores pares\n",b);
    return 0;
}