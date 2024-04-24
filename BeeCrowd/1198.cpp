#include<stdio.h>
#include<math.h>

int main(){
    int a,b;
    while (scanf("%d %d",&a,&b)!=EOF){
        int answer=abs(a-b);
        printf("%d\n",answer);
    }
    
    return 0;
}