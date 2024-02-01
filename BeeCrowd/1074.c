#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    for (int i = 0; i < N; i++)
    {
        int a;
        scanf("%d",&a);
        if(a==0){
            printf("NULL\n");
        }
        else if(a%2!=0 && a<0){
            printf("ODD NEGATIVE\n");
        }
        else if(a%2!=0 && a>0){
            printf("ODD POSITIVE\n");
        }
        else if(a%2==0 && a<0){
            printf("EVEN NEGATIVE\n");
        }
        else if(a%2==0 && a>0){
            printf("EVEN POSITIVE\n");
        }
    }
    
    return 0;
}