#include<stdio.h>

int main(){
    float a,b;
    int choice;
    for(int i=0;;i++){
        for (int j = 0;; j++)
        {
        scanf("%f",&a);
        if(a>=0 && a<=10){
            for (int k = 0;; k++){
                scanf("%f",&b);
                if(b>=0 && b<=10){
                    printf("media = %0.2f\n",((a+b)/2));
                    break;
                }else{
                    printf("nota invalida\n");
                }
            }
            break;
            }
            else{
                printf("nota invalida\n");
            }
        }
        // printf("novo calculo (1-sim 2-nao)\n");
        // scanf("%d",&choice);
        // while(choice!=1 ||choice !=2)
        // {
        //     printf("novo calculo (1-sim 2-nao)\n");
        //     scanf("%d",&choice);
        // }
        for (int l = 0;; l++){
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d",&choice);
            if (choice==1)
            {
                break;
            }else if (choice==2)
            {
                break;
            }   
        }
        
        if (choice==2){
            break;
        }
        if (choice==1)
        {
            continue;
        }
    }
    return 0;
}