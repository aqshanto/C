//https://ideone.com/Qjer8I
#include<stdio.h>
#include<string.h>

int pali(char S[],int start,int end){
    int j=end-1;
    for(int i=start;i<=end/2;i++){
        if(S[i]!=S[j]){
            return 1;
        }else{
            j--;
        }
    }
    return 0;
}

int main(){
    char S[100];
    scanf("%s",S);
    int size=strlen(S);
    int check = pali(S,0,size);
    if(check==0){
        int check1=pali(S,0,(size-1)/2);
        int check2=pali(S,(size+3)/2,size);
        if(check1==0 && check2 ==0){
            printf("Yes\n");
        }
    }else if(check==1){
        printf("No\n");
    }
    return 0;
}