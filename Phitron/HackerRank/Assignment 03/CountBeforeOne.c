#include<stdio.h>

int count_before_one(int n,int arr[]){
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            return i;
        }
    }
    return n;
}

int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d\n",count_before_one(size,arr));
}
