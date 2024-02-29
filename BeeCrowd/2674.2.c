/*#include<stdio.h>
int main(){
    int num,c=1;
    while(scanf("%d",&num)!=EOF){
        for(int i=1;i<=num;i++){
            int count =0;
            if(num%i==0){
                count++;
            }
            if (count==2)
            {
                printf("Nada\n");
            }
            else{
                c=2;
            }
        }
        if(c==2){
            while (num!=0){
                    int reminder=num%10;
                    for(int i=2;i<reminder;i++){
                        if(reminder%i==0){
                            c=1;
                            break;
                        }
                    }
                    if(c==1){
                        break;
                    }
                    num=num/10;
                }
                if(c==2){
                    printf("Super\n");
                }else{
                    printf("Primo\n");
                }
        }
    }
    return 0;
}
*/
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
                reminder=num%10;
                count=0;
                for(int i=1;i<=reminder;i++){
                    if(reminder%i==0){
                        count++;
                    }
                    if(count>2){
                        printf("Primo\n");
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
        if(c==3){
            printf("Super\n");
        }        
    }
    
    return 0;
}