#include<stdio.h>

int main(){
    int n[6];
    scanf("%d %d %d",&n[0],&n[1],&n[2]);
    scanf("%d %d %d",&n[3],&n[4],&n[5]);
    int sum=0;
    if((n[0]-n[3])<0){
        sum+=(n[3]-n[0]);
    }
    if((n[1]-n[4])<0){
        sum+=(n[4]-n[1]);
    }
    if((n[2]-n[5])<0){
        sum+=(n[5]-n[2]);
    }
    printf("%d\n",sum);
    return 0;
}