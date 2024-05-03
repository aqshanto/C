#include<stdio.h>
#include<math.h>

int main(){
    long long int n;
    scanf("%lld",&n);
    if(pow(2,n)>pow(n,2)){
        printf("Yes\n");
    }else{ 
        printf("No\n");
    }
    return 0;
}