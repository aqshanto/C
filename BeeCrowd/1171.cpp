#include<stdio.h>

int main(){
    int X,num,arr[2010];
    scanf("%d",&X);
    for(int i=0;i<2000;i++){
        arr[i]=0;
    }
    for(int i=0;i<X;i++){
        scanf("%d",&num);
        arr[num]++;
    }
    for(int i=0;i<2000;i++){
        if(arr[i]>0){
            printf("%d aparece %d vez(es)\n",i,arr[i]);
        }
    }
    return 0;
}

