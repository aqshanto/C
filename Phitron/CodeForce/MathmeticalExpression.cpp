//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W
#include<stdio.h>

int main(){
    long long int a,b,c;
    char s;
    scanf("%lld %c %lld = %lld",&a,&s,&b,&c);
    if(s=='+'){
        if((a+b)==c)
            printf("Yes\n");
        else
            printf("%lld\n",a+b);
    }
    if(s=='-'){
        if((a-b)==c)
            printf("Yes\n");
        else
            printf("%lld\n",a-b);
    }
    if(s=='*'){
        if((a*b)==c)
            printf("Yes\n");
        else
            printf("%lld\n",a*b);
    }
    return 0;
}