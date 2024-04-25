#include<stdio.h>

int main(){
    int a,b;
    while(1){
        scanf("%d %d",&a,&b);
        if(a==0 && b==0){
            break;
        }
        int rem1,rem2,count=0,extra=0;
        while (a!=0 || b!=0){
            rem1=a%10;
            rem2=b%10;
            //printf("rim =%d %d num=%d %d\n",rem1,rem2,a,b);
            a/=10;
            b/=10;
            if((rem1+rem2+extra)>=10){
                count++;
                extra=1;
            }else{
                extra=0;
            }
        }
        if(count==0)printf("No carry operation.\n");
        else if(count==1)printf("%d carry operation.\n",count);
        else printf("%d carry operations.\n",count);
    }
    return 0;
}