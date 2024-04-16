//https://docs.google.com/document/d/1l8SGO2koyr-1Enp89iu8aH6Img_rNzuh8bSxDRMqLD0/edit
#include<stdio.h>
#include<math.h>

void printseries(int n);

int main(){
    int n;
    scanf("%d",&n);
    printseries(n);
    printf("%0.0f\n",pow(n,(n-1)));
    return 0;
}

void printseries(int n){
    for(int i=0;i<(n-1);i++){
        printf("%.0f+",pow(n,i));
    }
}