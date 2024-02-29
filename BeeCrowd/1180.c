#include<stdio.h>

int main(){
    int n,lowest=10000,position=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]<lowest){
            lowest=arr[i];
            position=i;
        }
    }
    printf("Menor valor: %d\n",lowest);
    printf("Posicao: %d\n",position);
    return 0;
}