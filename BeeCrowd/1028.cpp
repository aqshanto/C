#include<stdio.h>

int main(){
    int test;
    scanf("%d",&test);
    int a,b;
    for(int i=0;i<test;i++){
        scanf("%d %d",&a,&b);
        while(b!=0){
            int temp=b;
            b=a%b;
            a=temp;
        }
        printf("%d\n",a);
    }
    return 0;
}