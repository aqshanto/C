#include<stdio.h>

int main(){
    int test;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        int upper,lower,arr[4];
        scanf("%d",&upper);
        for(int i=0;i<4;i++){
            scanf("%d",&arr[i]);
        }
        scanf("%d",&lower);
        if(upper+lower==arr[0]+arr[2] && arr[1]+arr[3]==arr[0]+arr[2]){
            printf("SIM\n");
        }else{
            printf("NAO\n");
        }
    }
    return 0;
}