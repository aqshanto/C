#include<stdio.h>
#include<math.h>

int main(){
    int test;
    scanf("%d",&test);
    int A,B;
    double rA,rB;
    for(int i=0;i<test;i++){
        scanf("%d %d %lf %lf",&A,&B,&rA,&rB);
        double dif=(rA-rB)/100;
        double year=abs(B-A+1)/(A*dif);
        if(year<=100){
            int result=floor(year);
            printf("%d anos\n",result);
        }
        else{
            printf("Mais de 1 seculo.\n");
        }
    }
    return 0;
}
