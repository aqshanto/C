#include<stdio.h>

int main(){
    int n;
    char N[35]="LIFE IS NOT A PROBLEM TO BE SOLVED";
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("%c",N[i]);
    }
    printf("\n");
    return 0;
}