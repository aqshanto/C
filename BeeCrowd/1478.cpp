#include<stdio.h>
int main(){
    int n,count1=0,arr[101][101],num;
    for(int a=0;;a++){
        scanf("%d",&n);
        int b=1;
        if(n==0){
            break;
        }
        if(n==1){
            printf("%3d\n",b);
        }else{
            for(int i=0;i<n;i++){
                num=1+i;
                for(int j=0;j<n;j++){
                    if(i==j){
                        arr[i][j]=1;
                    }else if(i<j){
                        arr[i][j]=1+(j-i);
                    }
                    else if(i>j){
                        arr[i][j]=1+(i-j);
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