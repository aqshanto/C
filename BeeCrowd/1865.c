#include<stdio.h>
#include<string.h>

int main(){
    int n,force;
    char name[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s %d",name,&force);
        if(strcmp(name,"Thor")==0){
            printf("Y\n");
        }
        else{
            printf("N\n");
        }
    }
    return 0;
}