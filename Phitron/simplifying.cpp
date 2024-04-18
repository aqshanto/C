//https://www.hackerrank.com/contests/practice-1713096494/challenges/simplifying
#include<stdio.h>

int main(){
    int a,b,x=0,y=0;
    scanf("%d/%d",&a,&b);
    int LA[a],LB[b];
    for(int i=1;i<a;i++){
        if(a%i==0){
            LA[x]=i;
            x++;
        }
    }for(int i=1;i<b;i++){
        if(b%i==0){
            LB[y]=i;
            y++;
        }
    }
    int max=-55555555;
    for(int i=x;i>=1;i--){
        //printf("hello");
        for(int j=y;j>=1;j--){
            printf("world");
            if(LA[i]==LB[j]){
                if(LA[i]>max){
                    max=LA[i];
                }
            }
        }
    }
    printf("%d\n",max);
    return 0;
}