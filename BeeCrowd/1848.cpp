#include<stdio.h>
#include<string.h>

int main(){
    char eye[10];
    int  sum=0,count=0;
    while(count!=3){
        fgets(eye,sizeof(eye),stdin);
        if(strcmp(eye,"caw caw\n")==0){
            printf("%d\n",sum);
            sum=0;
            count++;
        }
        if(strcmp(eye,"--*\n")==0){
            sum+=1;
        }if(strcmp(eye,"-*-\n")==0){
            sum+=2;
        }if(strcmp(eye,"-**\n")==0){
            sum+=3;
        }if(strcmp(eye,"*--\n")==0){
            sum+=4;
        }if(strcmp(eye,"*-*\n")==0){
            sum+=5;
        }if(strcmp(eye,"**-\n")==0){
            sum+=6;
        }if(strcmp(eye,"***\n")==0){
            sum+=7;
        }
        if(count==3){
            break;
        }
    }
    return 0;
}