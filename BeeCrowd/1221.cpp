#include<stdio.h>
#include<math.h>

int main(){
    int test,num;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        scanf("%d",&num);
        int count=1;
        for(int j=2;j<=sqrt(num);j++){
            if(num%j==0){
                count=0;
                break;
            }
        }
        if(count==1){
            printf("Prime\n");
        }else if(count==0){
            printf("Not Prime\n");
        }
    }
    return 0;
}