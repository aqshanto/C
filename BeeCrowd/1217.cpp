#include <stdio.h>
#include <string.h>

int main(){
    int test,count,quantity=0;
    float value,total=0.0;
    char name[100000];
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        count=1;
        scanf("%f\n",&value);
        total+=value;
        gets(name);
        for(int i=0;i<strlen(name);i++){
            if(name[i]==' '){
                count++;
            }
        }
        quantity+=count;
        printf("day %d: %d kg\n",i+1,count);
    }
    printf("%0.2f kg by day\n",(float)quantity/test);
    printf("R$ %0.2f by day\n",(float)total/test);
}