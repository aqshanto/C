#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char sentence[1005],check[51];
    int count1 =2, count2=2;
    for(int j=0;;j++){
        fgets(sentence,1005,stdin);
        sentence[strlen(sentence)-1]='\0';
        if(strcmp("*",sentence)==0){
            break;
        }
        check[0]=toupper(sentence[0]);

        int length=strlen(sentence);
        int a=0;
        for(int i=0;i<length;i++){
            if(sentence[i]==' '){
                a++;
                char upper = toupper(sentence[i+1]);
                check[a]=upper;
            }
            if(check[0]==check[a]){
                count1=1;
            }
            else{
                count2=1;
            }
        }
        if(count1==1 && count2!=1){
            printf("Y\n");
        }
        else{
            printf("N\n");
        }
    }
    return 0;
}