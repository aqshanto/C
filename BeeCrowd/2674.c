#include<stdio.h>
#include<math.h>

int main(){
    int num,reminder;
    while (scanf("%d",&num)!=EOF){
        int isPrime=1;
        if(num==0 || num ==1){
            isPrime=0;
        }else if(num==2){
            isPrime=1;
        }else if(num%2==0){
            isPrime=0;
        }else{
            for(int i=3;i<=sqrt(num);i+=2){
                if(num%i==0){
                    isPrime=0;
                    break;
                }
            }
        }
        if(isPrime==0)
            printf("Nada\n");
        else{
            int isSuperPrime=1;
            while(num>=10){
                reminder = num%10;
                num/=10;
                if(reminder!=2 && reminder!=3 && reminder!=5 && reminder!=7){
                    isSuperPrime=0;
                    break;
                }
            }
            if(num!=2 && num!=3 && num!=5 && num!=7){
                    isSuperPrime=0;
            }
            if(isSuperPrime==1){
                printf("Super\n");
            }else{
                printf("Primo\n");
            }
        }        
    }
    return 0;
}