#include<stdio.h>

int main(){
    int n,arr[110],lowest=25,position=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
        if(lowest>arr[i]){
            lowest=arr[i];
            position=i;
        }
    }
    printf("%d\n",position);
    return 0;
}