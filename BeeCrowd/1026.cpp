#include<stdio.h>

int main(){
    unsigned int a,b;
    while(scanf("%u %u",&a,&b)!=EOF){
        unsigned ans=a^b;
        printf("%u\n",ans);
    }
    return 0;
}