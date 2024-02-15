#include<stdio.h>

int main(){
    int a=1,j=60;
    printf("I=%d J=%d\n",a,j);
    for(int i=0;;i++){
        a = a+3;
        j = j-5;
        printf("I=%d J=%d\n",a,j);
        if(j==0){
            break;
        }
    }
    return 0;
}