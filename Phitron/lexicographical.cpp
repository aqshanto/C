#include<stdio.h>

int main(){
    char a[100],b[100];
    while(scanf("%s %s",a,b)!=EOF){
        int i=0;
        while(1){
            if(a[i]=='\0' && b[i]=='\0'){
                printf("a=b\n");
                break;
            }else if(a[i]<b[i]){
                printf("a is small\n");
                break;
            }else if(a[i]>b[i]){
                printf("b is small\n");
                break;
            }else if(a[i]=='\0'){
                printf("a is small\n");
                break;
            }else if(b[i]=='\0'){
                printf("b is small\n");
                break;
            }else{
                i++;
            }
        }
    }
    return 0;
}