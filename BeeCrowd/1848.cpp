#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    int screamCount=0,ticketNum=0,count[3];
    char sign[10];
    for(int i=0;;i++){
        fgets(sign,10,stdin);
        if(strcmp(sign,"caw caw")==0){
            screamCount++;
        }else{
            for(int i=0;i<3;i++){
                for(int j=2;j>=0;j--){
                    if(sign[i]=='*'){
                        count[j]=1;
                    }
                    else{
                        count[j]=0;
                    }
                    printf("%d ",count[j]);
                }
            }
            int m=2;
            for(int k=0;k<3;k++){
                ticketNum=ticketNum+(count[k]*m);
                m--;
            }
            printf("%d\n",ticketNum);
        }
        if(screamCount==3){
            break;
        }

    }
    return 0;
}