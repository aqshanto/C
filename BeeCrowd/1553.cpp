#include <stdio.h>
#include <string.h>

int main(){
    int n,k;
    while(1){
        scanf("%d %d",&n,&k);
        if(n==0 && k==0) break;

        int arr[n];
        int check[102];
        for(int i=0;i<sizeof(check);i++){
            check[i]=0;
        }

        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
            check[arr[i]]++;
        }

        int count=0;
        for(int i=0;i<sizeof(check);i++){
            if(check[i]>k){
                count++;
                printf("%d ",count);
            }
        }
        printf("%d\n",count);
    }
}