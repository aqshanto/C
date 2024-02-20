#include<stdio.h>
int main(){
    int n1;
    float num1,temp1;
    while(scanf("%d",&n1)!=EOF){
        temp1=100.0;
        for(int i=1;i<=n1;i++){
            scanf("%f",&num1);
            if(temp1>num1){
                temp1=num1;
            }
        }
        printf("%.2f\n",temp1);
    }
    return 0;
}