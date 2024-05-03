#include<stdio.h>
#include<string.h>

int main(){
    char str1[100000];
    char str2[100000];
    scanf("%s",str1);
    scanf("%s",str2);
    int size1=strlen(str1);
    int diff=(int)str2[0]-(int)str1[0];
    int flag=0;

    for(int i=0;i<size1;i++){
        if(((int)str1[i]+diff)>122){
            if('a'+(diff-(122-(int)str1[i]))!=str2[i]){
                flag=1;
                break;
            }
        }else{
            if((char)((int)str1[i]+diff)!=str2[i]){
                flag=1;
                break;
            }
        }

    }
    if(flag==1){
        printf("No\n");
    }else if(flag==0){
        printf("Yes\n");
    }
    return 0;
}