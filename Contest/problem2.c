#include<stdio.h>
#include<math.h>

int main(){
    int arr[4];
    scanf("%d %d",&arr[0],&arr[1]);
    scanf("%d %d",&arr[2],&arr[3]);
    double r=sqrt((arr[0]*arr[0])+(arr[1]*arr[1]));
    double w=sqrt((arr[2]*arr[2])+(arr[3]*arr[3]));
    printf("%lf\n",r);
    printf("%lf\n",w);
    if (r<w){
        printf("Russo\n");
    }else if(r>w){
        printf("Wil\n");
    }else if(r==w){
        printf("Empate\n");
    }
    return 0;
}