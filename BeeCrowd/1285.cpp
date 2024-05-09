#include<stdio.h>
#include<string.h>

int main(){
    int a,b;
    while (scanf("%d %d",&a,&b)!=EOF){
        int arr[10],count=0;
        for(int i=a;i<=b;i++){
            memset(arr,0,sizeof(arr));
            int j=i;
            while(j!=0){
                int digit=j%10;
                arr[digit]++;
                j/=10;
            }
            for(int k=0;k<10;k++){
                if(arr[k]>1){
                    count++;
                    break;
                }
            }
        }
        printf("%d\n",b-a+1-count);
    }
    
}