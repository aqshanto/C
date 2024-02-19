#include<stdio.h>

int main(){
    char a[10][30];
    for(int i=0;i<10;i++){
        scanf("%s",&a[i]);
    }
    printf("%s\n",a[2]);
    printf("%s\n",a[6]);
    printf("%s\n",a[8]);
    return 0;
}