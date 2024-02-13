#include<stdio.h>

int main(){
    double a = 234.345 ,b =45.698;
    printf("%0.6lf - %0.6lf\n",a,b);
    printf("%0.0lf - %0.0lf\n",a,b);
    printf("%0.1lf - %0.1lf\n",a,b);
    printf("%0.2lf - %0.2lf\n",a,b);
    printf("%0.3lf - %0.3lf\n",a,b);
    printf("%0.6e - %0.6e\n",a,b);
    printf("%0.6E - %0.6E\n",a,b);
    printf("%0.3lf - %0.3lf\n",a,b);
    printf("%0.3lf - %0.3lf\n",a,b);
    return 0;
}