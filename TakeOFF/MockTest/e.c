#include<stdio.h>

int main(){
    int size;
    scanf("%d",&size);
    int arr[size],num;
    for(int i =0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int count=1;
    num=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]==num){

        }else{
            count++;
            num=arr[i];
        }
    }
    printf("%d\n",count);
}