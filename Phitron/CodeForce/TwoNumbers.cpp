//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/H
#include<stdio.h>

int main(){
    int a,b;
    double num;
    scanf("%d %d",&a,&b);
    num=(float)a/(float)b;
        printf("floor %d / %d = %d\n",a,b,(int)num);
        //printf("%d %lf",(int)num,(float)num);
    if((float)num==(int)num){
        printf("ceil %d / %d = %d\n",a,b,(int)num);
    }else{
        printf("ceil %d / %d = %d\n",a,b,(int)num+1);
    }
    if((num-(int)num)<0.5){
        printf("round %d / %d = %d\n",a,b,(int)num);
    }else{
        printf("round %d / %d = %d\n",a,b,(int)num+1);
    }
    return 0;
}