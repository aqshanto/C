//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U
#include<stdio.h>

int main(){
    double num;
    scanf("%lf",&num);
    if((num-(int)num)==0){
        printf("int %d\n",(int)num);
    }else{
        printf("float %d %0.3lf\n",(int)num,(num-(int)num));
    }
    return 0;
}