//https://www.hackerrank.com/contests/practice-1713096494/challenges/beautiful-year-easy
#include<stdio.h>

int main(){
    int num,reminder[5],i=0,check=0;
    scanf("%d",&num);
    while(num!=0){
        reminder[i]= num%10;
        num/=10;
        i++;
    }
    for(i=0;i<3;i++){
        for(int j=i+1;j<4;j++){
            if(reminder[i]==reminder[j]){
                check=1;
                break;
            }
        }
    }
    if(check==1){
        printf("NO\n");
    }else{
        printf("YES\n");
    }
    return 0;
}