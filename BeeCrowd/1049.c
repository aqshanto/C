#include<stdio.h>
#include<string.h>

int main(){
    char a[30],b[30],c[30];
    char a1[30]="vertebrado";
    char a2[30]="invertebrado";
    char b1[30]="ave";
    char b2[30]="mamifero";
    char b3[30]="inseto";
    char b4[30]="anelideo";
    char c1[30]="carnivoro";
    char c2[30]="onivoro";
    char c3[30]="onivoro";
    char c4[30]="herbivoro";
    char c5[30]="hematofago";
    char c6[30]="herbivoro";
    char c7[30]="hematofago";
    char c8[30]="onivoro";

    scanf("%30s",a);
    scanf("%30s",b);
    scanf("%30s",c);
    if(strcmp(a,a1)==0 && strcmp(b,b1)==0 && strcmp(c,c1)==0){
        printf("aguia\n");
    }
    if(strcmp(a,a1)==0 && strcmp(b,b1)==0 && strcmp(c,c2)==0){
        printf("pomba\n");
    }
    if(strcmp(a,a1)==0 && strcmp(b,b2)==0 && strcmp(c,c3)==0){
        printf("homem\n");
    }
    if(strcmp(a,a1)==0 && strcmp(b,b2)==0 && strcmp(c,c4)==0){
        printf("vaca\n");
    }
    if(strcmp(a,a2)==0 && strcmp(b,b3)==0 && strcmp(c,c5)==0){
        printf("pulga\n");
    }
    if(strcmp(a,a2)==0 && strcmp(b,b3)==0 && strcmp(c,c6)==0){
        printf("lagarta\n");
    }
    if(strcmp(a,a2)==0 && strcmp(b,b4)==0 && strcmp(c,c7)==0){
        printf("sanguessuga\n");
    }
    if(strcmp(a,a2)==0 && strcmp(b,b4)==0 && strcmp(c,c8)==0){
        printf("minhoca\n");
    }
    return 0;
}