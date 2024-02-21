#include<stdio.h>
int main(){
    // char c ='*';
    // printf("%c\n",c);
    // printf("%c\n",c);
    // printf("%c\n",c);
    int n;
    char star[100];
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        star[i]='*';
    }
    printf("%s",star);
    
    return 0;
}