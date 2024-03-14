#include<stdio.h>
int main(){
    int n,count1=0,arr[101][101];
    for(int a=0;;a++){
        scanf("%d",&n);
        int b=1;
        if(n==0){
            break;
        }
        if(n==1){
            printf("%3d\n",b);
        }else{
                int m=(n/2);
                    for(int i=0;i<n;i++){
                        for(int j=0;j<n;j++){
                            for(int k=m;k>=0;k--){
                                if(i==k || i==(n-k-1)){
                                    arr[i][j]=1+k;
                                }
                                else if(j==k || j==(n-k-1)){
                                    arr[i][j]=1+k;
                                }
                            }
                        }
                    }
                for(int i=0;i<n;i++){
                    for(int j=0;j<n;j++){
                        if (j == 0){
                            printf("%3d", arr[i][j]);
                        }
                        else{
                            printf(" %3d", arr[i][j]);
                        }
                    }
                    printf("\n");
                }
            }
            printf("\n");
        }
    return 0;
}