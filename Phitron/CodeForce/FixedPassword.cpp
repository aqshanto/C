//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/D
#include<stdio.h>

int main(){
    int password =1999,user_pass;
    for(int i=0;;i++){
        scanf("%d",&user_pass);
        if(user_pass==password){
            printf("Correct\n");
            break;
        }else
        {
            printf("Wrong\n");
        }
    }
    return 0;
}