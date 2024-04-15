#include<stdio.h>
#include<string.h>

int main(){
    char food[50],food1[50]="suco de laranja\n",food2[50]="morango fresco\n",food3[50]="mamao\n",food4[50]="goiaba vermelha\n";
    char food5[50]="manga\n";
    char food6[50]="laranja\n";
    char food7[50]="brocolis\n";
    int num,test,sum;
    while(test!=0){
        scanf("%d",&test);
        sum=0;
        if(test==0)
            break;
        for(int i=0;i<test;i++){
            scanf("%d",&num);
            fgets(food,sizeof(food),stdin);
            printf("hello %d\n",i);
            if(strcmp(food,food1)==0)
                sum+=(num*120);
            else if(strcmp(food,food2)==0)
                sum+=(num*85);
            else if(strcmp(food,food3)==0)
                sum+=(num*85);
            else if(strcmp(food,food4)==0)
                sum+=(num*70);
            else if(strcmp(food,food5)==0)
                sum+=(num*56);
            else if(strcmp(food,food6)==0)
                sum+=(num*50);
            else if(strcmp(food,food7)==0)
                sum+=(num*34);
        }
        printf("%d\n",sum);
        if(sum<=130 && sum>=110)
            printf("%d mg\n",sum);
        else if(sum>130)
            printf("Menos %d mg\n",sum-130);
        else if(sum<110)
            printf("Mais %d mg\n",120-sum);
    }
    
    return 0;
}