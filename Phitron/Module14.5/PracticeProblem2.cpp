//https://docs.google.com/document/d/1uzoOl9K0McJaxyy_o0p4la_sGCC8A-O8/edit
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf(" ");
        }
        for(int j=2*i+1;j<2*n;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}