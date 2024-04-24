//https://codeforces.com/problemset/problem/110/A
#include<stdio.h>

int main(){
    long long int n;
    scanf("%lld",&n);
    int count=0;
    while(n!=0){
        int reminder=n%10;
        if(reminder==4 || reminder==7){
            count++;
        }
        n/=10;
    }
    if(count==4 || count==7){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}