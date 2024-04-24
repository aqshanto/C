#include<stdio.h>

int main(){
    char seq[27];
    while(scanf("%s",seq)!=EOF){
        int test;
        scanf("%d",&test);
        int num;
        for(int i=0;i<test;i++){
            scanf("%d",&num);
            printf("%c",seq[num-1]);
        }
        printf("\n");
    }
    return 0;
}