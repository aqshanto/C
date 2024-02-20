#include<stdio.h>
int main(){
    int value;
    long long int xp;
    while (value !=0 && xp!=0){
        scanf("%d %lld",&value,&xp);
        long long int a =(value*xp);
        if(a==0){
            
        }else{
            printf("%lld\n",a);
        }
    }
    return 0;
}