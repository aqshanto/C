#include<stdio.h>
#include<string.h>

int main(){
    char dollar[10],cent[3];
    while(scanf("%s %s",dollar,cent)!=EOF){
        int dollarlen=strlen(dollar);
        int centlen=strlen(cent);
        printf("%d %d\n",dollarlen,centlen);
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
        }
        int j=dollarlen-1;
        int count=0;
        for(int i=3;i<(3+1+comma+dollarlen);i++){
            if(count==dollarlen){
                out[i]='$';
                break;
            }else if(count%3==0){
                out[i]=',';
            }else{
                out[i]=dollar[j];
                j--;
                count++;
            }
        }
        for(int i=0;i<13;i++){
            printf("%c",out[i]);
        }
        printf("\n");
    }
    return 0;
}