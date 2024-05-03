#include<stdio.h>

int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int flag=0,even=0,count=0;
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            even++;
        }
    }
    for(int i=0;i<size;i++){
        if((arr[i]%2==0 && arr[i]%3==0) ||(arr[i]%2==0 && arr[i]%5==0)){
            count++;
        }
    }
    if(count==even){
        printf("APPROVED\n");
    }else{
        printf("DENIED\n");
    }
    return 0;
}