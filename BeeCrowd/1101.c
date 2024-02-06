#include<stdio.h>

int main(){
    int M1,N1,M2,N2,M3,N3;
    int sum1 =0;
    int sum2 =0;
    int sum3 =0;
    scanf("%d %d", &M1,&N1);
    scanf("%d %d", &M2,&N2);
    scanf("%d %d", &M3,&N3);

    if(M1<=0 || N1 <=0){
        
    }else if (M1>N1){
        for (int i = N1; i <= M1; i++){
            printf("%d ",i);
            sum1 = sum1 + i;
        }
        printf("Sum=%d\n", sum1);
    }else if (M1<N1){
        for (int i = M1; i <= N1; i++){
            printf("%d ",i);
            sum1 = sum1 + i;
        }
        printf("Sum=%d\n", sum1);
    }
    if(M2<=0 || N2 <=0){
        
    }else if (M2>N2){
        for (int i = N2; i <= M2; i++){
            printf("%d ",i);
            sum2 = sum2 + i;
        }
        printf("Sum=%d\n", sum2);
    }else if (M2<N2){
        for (int i = M2; i <= N2; i++){
            printf("%d ",i);
            sum2 = sum2 + i;
        }
        printf("Sum=%d\n", sum2);
    }if(M3<=0 || N3 <=0){
        
    }else if (M3>N3){
        for (int i = N3; i <= M3; i++){
            printf("%d ",i);
            sum3 = sum3 + i;
        }
        printf("Sum=%d\n", sum3);
    }else if (M3<N3){
        for (int i = M3; i <= N3; i++){
            printf("%d ",i);
            sum3 = sum3 + i;
        }
        printf("Sum=%d\n", sum3);
    }
    return 0;
}