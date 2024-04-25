#include<stdio.h>

int main(){
    char a[21],b[21];
    scanf("%s %s",a,b);
    int i=0;
    while(1){
        if(a[i]=='\0' && b[i]=='\0'){
            printf("%s\n%s\n",a,b);
            break;
        }else if(a[i]<b[i]){
            printf("%s\n%s\n",a,b);
            break;
        }else if(a[i]>b[i]){
            printf("%s\n%s\n",b,a);
            break;
        }else if(a[i]=='\0'){
            printf("%s\n%s\n",a,b);
            break;
        }else if(b[i]=='\0'){
            printf("%s\n%s\n",b,a);
            break;
        }else{
            i++;
        }
    }
    return 0;
}