#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c;
    while (a!=0 && b!=0 && c!=0){
        scanf("%d %d %d",&a,&b,&c);
        if(a==0&& b==0&& c==0){
            break;
        }
        double cube=a*b*c;
        double ans=cbrt(cube);
        int intvalue=(int)ans;
        printf("%d\n",intvalue);
    }
    return 0;
}