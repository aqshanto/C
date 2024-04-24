#include<stdio.h>

int main(){
    int test;
    scanf("%d",&test);
    char panel[1000];
    for(int i=0;i<test;i++){
        scanf("%s",panel);
        //printf("%s\n",panel);
        int j=0,sum=0;
        while(panel[j]!='\0'){
            if(panel[j]=='1')sum+=2;
            else if(panel[j]=='2')sum+=5;
            else if(panel[j]=='3')sum+=5;
            else if(panel[j]=='4')sum+=4;
            else if(panel[j]=='5')sum+=5;
            else if(panel[j]=='6')sum+=6;
            else if(panel[j]=='7')sum+=3;
            else if(panel[j]=='8')sum+=7;
            else if(panel[j]=='9')sum+=6;
            else if(panel[j]=='0')sum+=6;
            j++;
            //printf("%d leds\n",sum);
        }
        printf("%d leds\n",sum);
    }
    return 0;
}