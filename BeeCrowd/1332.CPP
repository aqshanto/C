#include<stdio.h>
#include<string.h>

int main(){
    int test;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        char ch[10];
        scanf("%s",ch);
        int len=strlen(ch);
        if(len==3){
            if((ch[0]=='o'&& ch[1]=='n')|| (ch[0]=='o'&& ch[2]=='e')||(ch[1]=='n'&& ch[2]=='e')){
                printf("1\n");
            }else if((ch[0]=='t'&& ch[1]=='w')|| (ch[0]=='t'&& ch[2]=='o')||(ch[1]=='w'&& ch[2]=='o')){
                printf("2\n");
            }else if((ch[0]=='s'&& ch[1]=='i')|| (ch[0]=='s'&& ch[2]=='x')||(ch[1]=='i'&& ch[2]=='x')){
                printf("6\n");
            }else{
                printf("10\n");
            }
        }else if(len==4){
            if((ch[0]=='f'&& ch[1]=='o')|| (ch[0]=='f'&& ch[2]=='u')||(ch[1]=='o'&& ch[2]=='u')){
                printf("4\n");
            }else if((ch[1]=='i'&& ch[2]=='v')|| (ch[1]=='i'&& ch[3]=='e')||(ch[2]=='v'&& ch[3]=='e')){
                printf("5\n");
            }else{
                printf("9\n");
            }
        }else if(len==5){
            if((ch[0]=='t'&& ch[1]=='h')|| (ch[0]=='t'&& ch[2]=='r')||(ch[1]=='h'&& ch[2]=='r')){
                printf("3\n");
            }else if((ch[0]=='s'&& ch[1]=='e')|| (ch[0]=='s'&& ch[2]=='v')||(ch[1]=='e'&& ch[2]=='v')){
                printf("7\n");
            }else{
                printf("8\n");
            }
        }
    }
    return 0;
}