#include<stdio.h>
#include<string.h>

int main(){
    char a[105],b[105],c[105];
    fgets(a,105,stdin);
    a[strlen(a)-1]='\0';
    fgets(b,105,stdin);
    b[strlen(b)-1]='\0';
    fgets(c,105,stdin);
    c[strlen(c)-1]='\0';

    printf("%s%s%s\n",a,b,c);
    printf("%s%s%s\n",b,c,a);
    printf("%s%s%s\n",c,a,b);
    a[10]='\0';
    b[10]='\0';
    c[10]='\0';
    printf("%s%s%s\n",a,b,c);
    return 0;
}