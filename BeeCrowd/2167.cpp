#include<stdio.h>

int main(){
    int test;
    scanf("%d",&test);
    int n[test];
    for(int i=0;i<test;i++){
        scanf("%d",&n[i]);
    }
    int count=0;
    for(int i=1;i<test;i++){
        if(n[i]<n[i-1]){
            printf("%d\n",i+1);
            count=1;
            break;
        }
    }
    if(count==0){
        printf("0\n");
    }
    return 0;
}