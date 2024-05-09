#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    double area=(3.1416*(n/2.0)*(n/2.0));
    double mid=(((n/2.0)*(n/2.0))-(area/4.0));
    double ans= (n/2.0*n/2.0)+2*mid;
    printf("%0.4lf\n",ans);
}
