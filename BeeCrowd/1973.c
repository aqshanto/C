#include<stdio.h>
int main()
{
    long long int starNum,star[1000010],range=-10;
    scanf("%lld",&starNum);
    for(int i=1;i<=starNum;i++){
        scanf("%lld",&star[i]);
    }
    star[1]=star[1]-1;
    int i=1;
    for(int j=1;;j++){
        if(i>starNum){
            break;
        }
        if(i>range){
            range=i;
        }
        if((star[i]+1)%2==0){
            i--;
            if(star[i]==0){
                break;
            }
            star[i]=star[i]-1;
        }
        else if((star[i]+1)%2!=0){
            i++;
            if(star[i]==0){
                break;
            }
            star[i]=star[i]-1;
        }        
    }
    long long int total=0;
    for(int i=1;i<=starNum;i++){
        total=total+star[i];
    }
    printf("%lld %lld\n",range,total);
    return 0;
}