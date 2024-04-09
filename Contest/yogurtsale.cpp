//https://codeforces.com/contest/1955/problem/A
#include<stdio.h>

int main(){
    int test,n,a,b;
    scanf("%d",&test);
    for (int i = 0; i < test; i++)
    {
        scanf("%d %d %d",&n,&a,&b);
        if(a*2>b){
            if(n%2==0){
                printf("%d\n",(n/2)*b);
            }else{
                printf("%d\n",(((n-1)/2)*b)+a);
            }
        }else
        {
            printf("%d\n",n*a);
        }
        
    }
    
    return 0;
}