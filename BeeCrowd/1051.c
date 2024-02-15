#include<stdio.h>

int main(){
    float salary,a;
    scanf("%f",&salary);
    if(salary>2000.00){
        salary =salary-2000.00;
        if(salary>1000.00){
            salary = salary-1000.00;
            if (salary>1500.00){
                salary =salary-1500.00;
                if(salary>0){
                    a = 80+270+(salary*0.28);
                    printf("R$ %0.2f\n",a);
                }
                else{
                    a = 80+(salary*0.18);
                    printf("R$ %0.2f\n",a);
                }
            }else{
                a = 80+(salary*0.18);
                printf("R$ %0.2f\n",a);
            }
        }else{
            a= salary*0.08;
            printf("R$ %0.2f\n",a);
        }
    }else{
        printf("Isento\n");
    }
    return 0;
}