//https://ideone.com/k5bLDK
#include<stdio.h>

int main(){
    int test;
    scanf("%d",&test);
    int start,end;
    for(int k=0;k<test;k++){
        scanf("%d %d",&start,&end);
        if(start>end){
            int temp=start;
            start=end;
            end=temp;
        }
        long long int count=0;
        for(int i=start;i<=end;i++){
            for(int j=start;j<=end;j++){
                if(i <= j && (j - i) >= start && (j - i) <= end){
                    count++;
                }
            }
        }
        printf("%lld\n",count);
    }
    return 0;
}