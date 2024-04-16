//https://docs.google.com/document/d/1detPtHnc0FvzUViwh99tFDAtii_F9rOifImKuwtWUIw/edit
#include<stdio.h>

void printup(int n);
void printdown(int n);
int main(){
    int n;
    scanf("%d",&n);
    printup(n);
    printdown(n-1);
    return 0;
}

void printup(int n){
    for(int i=1;i<=n;i++){
        printf("%d",i);
    }
}
void printdown(int n){
    for(int i=n;i>=1;i--){
        printf("%d",i);
    }
}