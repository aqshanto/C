//https://www.hackerrank.com/contests/practice-1713096494/challenges/count-odd-even-in-between/problem
#include<stdio.h>

int main(){
    int low ,high;
    scanf("%d %d",&low,&high);
    if(low>high){
        int temp=low;
        low=high;
        high=temp;
    }
    if(low%2==0){
        if((high-low+1)%2!=0){
            printf("Even : %d\n",((high-low+1)/2)+1);
            printf("Odd  : %d\n",((high-low+1)/2));
        }else{
            printf("Even : %d\n",((high-low+1)/2));
            printf("Odd  : %d\n",((high-low+1)/2));
        }
    }else{
        if((high-low+1)%2!=0){
            printf("Even : %d\n",((high-low+1)/2));
            printf("Odd  : %d\n",((high-low+1)/2)+1);
        }else{
            printf("Even : %d\n",((high-low+1)/2));
            printf("Odd  : %d\n",((high-low+1)/2));
        }
    }
    return 0;
}