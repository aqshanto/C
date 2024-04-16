#include<stdio.h>
#include<string.h>

int main(){
    char ch[21],ch1[21];
    fgets(ch,21,stdin);
    ch[strcspn(ch,"\n")]='\0';
    fgets(ch1,21,stdin);
    ch[strcspn(ch1,"\n")]='\0';
    printf("%c %c",ch[0],ch1[0]);
    if(strcmp(ch,ch1)<0){
        puts(ch);
        puts(ch1);
    }
    else if(ch[0]>ch1[0]){
        puts(ch1);
        puts(ch);
    }else if(ch[0]==ch1[0]){
        int i=0;
        while (ch[i]!=ch1[i]){
            i++;
            if(ch[i]!=ch1[i]){
                if(ch[i]<ch1[i]){
                    printf("hello");
                    puts(ch);
                    puts(ch1);
                }
                else if(ch[i]>ch1[i]){
                    printf("hello");
                    puts(ch1);
                    puts(ch);
                }
                break;
            }
        }
    }
    return 0;
}