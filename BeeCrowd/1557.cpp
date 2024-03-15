#include<stdio.h>
#include<math.h>

int main(){
    int n,count1=0,arr[101][101],num;
    for(int a=0;;a++){
        scanf("%d",&n);
        if(n==0){
            break;
        }
        num=pow(2,n+n-2);
        int width=0;
        while (num!=0){
            num /= 10;
            width++;
        }
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if (j == 0){
                        printf("%*d",width, (int)pow(2,i+j));
                    }
                    else{
                        printf(" %*d",width, (int)pow(2,i+j));
                    }
                }
                printf("\n");
            }
            printf("\n");
        }
    return 0;
}