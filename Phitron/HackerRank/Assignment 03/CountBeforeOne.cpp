#include<stdio.h>

int count_before_one(int n,int arr[]){
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            return i;
        }
    }

}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int base=count_before_one(n,arr);
    printf("%d\n",base);
    return 0;
}