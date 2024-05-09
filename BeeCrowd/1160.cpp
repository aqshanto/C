#include<stdio.h>
#include<math.h>

int main(){
    int test;
    scanf("%d",&test);
    int A,B;
    double rA,rB;
    for(int i=0;i<test;i++){
        scanf("%d %d %lf %lf",&A,&B,&rA,&rB);
        int year=0;
        while(A<=B){
            A=A+A*rA/100;
            B=B+B*rB/100;
            year++;
            if(year>100){
                break;
            }
        }
        if(year<=100){
            printf("%d anos\n",year);
        }
        else{
            printf("Mais de 1 seculo.\n");
        }
    }
    return 0;
}
