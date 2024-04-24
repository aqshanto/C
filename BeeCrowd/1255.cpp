#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    int test;
    scanf("%d",&test);
    getchar();
    for(int i=0;i<test;i++){
        char sentence[203];
        fgets(sentence,203,stdin);
        sentence[strcspn(sentence,"\n")]='\0';
        int count[26]={0};
        int max=0;
        for(int j = 0; sentence[j] != '\0'; j++) {
            sentence[j]=tolower(sentence[j]);
            if(sentence[j]<='z'&& sentence[j]>='a'){
                int index=sentence[j]-'a';  
                count[index]++;
                if(count[index]>max){
                    max=count[index];
                }
            }
        }
        for(int i=0;i<26;i++){
            if(count[i]==max){
                printf("%c",i+'a');
            }
        }
        printf("\n");
    }
    return 0;
}