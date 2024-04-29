#include<stdio.h>
#include<string.h>

int main(){
    char dollar[10],cent[3];
    while(scanf("%s %s",dollar,cent)!=EOF){
        int dollarlen=strlen(dollar);
        int centlen=strlen(cent);
        char out[50];
        if(centlen==1){
            out[0]=cent[0];
            out[1]='0';
            out[2]='.';
        }else if(centlen==2){
            out[0]=cent[1];
            out[1]=cent[0];
            out[2]='.';
        }
        int comma=0;
        if(3<dollarlen && dollarlen<=6){
            comma=1;
        }else if(6<dollarlen && dollarlen<=9){
            comma=2;
        }else{
            comma=3;
        }
        //printf("%d %d %d\n",dollarlen,centlen,comma);
        int j=dollarlen-1;
        int count=0;
        int a=comma+dollarlen+2+2;
        //printf("%d\n",a);
        int i;
        for(i=3;i<a;i++){
            if(count==dollarlen+comma){
                out[i]='$';
                break;
            }else if(count==3 || count ==7 ||comma==11){
                out[i]=',';
                count++;
            }else{
                out[i]=dollar[j];
                j--;
                count++;
            }
            //printf("j = %d count = %d out = %c\n",j,count,out[i]);
        }
        out[a]='\0';
        for(int i=a-1;i>=0;i--){
            printf("%c",out[i]);
        }
        printf("\n");
    }
    return 0;
}