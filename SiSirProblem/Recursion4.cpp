//https://docs.google.com/document/d/1eFgjG7Csg98X7WkXA-IAkIy-XI2l3i8NFGJffTC_gh4/edit
#include<stdio.h>

int factorial(int n);

int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",factorial(n));
    return 0;
}

int factorial(int n){
    int multi=1;
    for(int i=1;i<=n;i++){
        multi*=i;
    }
    return multi;
}