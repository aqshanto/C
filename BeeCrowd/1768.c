#include<stdio.h>
int main(){
    int n,x=1;
    char star[100];
    while (scanf("%d",&n)!=EOF){
        int height=(n+1)/2;
        for (int i = 1; i<=height; i++){
            int starCount  = (i*2)-1;
            int spaceCount = n/2;
            for (int j = i; j<=spaceCount; j++){
                printf(" ");
            }
            for (int i = 1; i<=starCount; i++){
                printf("*");
            }
            printf("\n");                       
        }
        for (int i = 1; i<=2; i++){
            int starCount  = (i*2)-1;
            int spaceCount = n/2;
            for (int j = i; j<=spaceCount; j++){
                printf(" ");
            }
            for (int i = 1; i<=starCount; i++){
                printf("*");
            }
            printf("\n");                       
        }
        printf("\n");
    }
    return 0;
}