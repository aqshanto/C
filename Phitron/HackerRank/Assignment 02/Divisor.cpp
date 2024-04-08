#include<stdio.h>

int main(){
    int D,Q,R;
    scanf("%d %d %d",&D,&Q,&R);
    int result = (D-R)/Q;
    printf("%d\n",result);
    return 0;
}