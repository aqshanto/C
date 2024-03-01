#include<stdio.h>

int main(){
    int num,count,c=1,reminder;
    while (scanf("%d",&num)!=EOF){
        count=0;
        for(int i=1;i<=num;i++){
            if(num%i==0){
                count++;
            }
            if(count>2){
                c=1;
                break;
            }
            else if (count<=2){
                c=2;
            }
        }
        if(c==1){
            printf("Nada\n");
        }
        else if(c==2){            
            while(num!=0){
                count=0;
                for(int i=1;i<=num;i++){
                    if(num%i==0){
                        count++;
                    }
                    if(count>2){
                        c=2;
                        break;
                    }
                    else if (count<=2){
                        c=3;
                    }
                }
                num=num/10;
                if(c==2){
                    break;
                }
            }
        }
        if(c==2){
            printf("Primo\n");
        }
        if(c==3){
            printf("Super\n");
        }        
    }
    
    return 0;
}