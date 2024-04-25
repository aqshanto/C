#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){//decrease
        if(b==c || b<c){
            printf(":)\n");//1st figure
        }
        if(b>c && (b-c)<(a-b)){
            printf(":)\n");//5th figure
        }
        if(b>c && (b-c)>(a-b)){
            printf(":(\n");//6th figure
        }
    }else if(a<b){//increse
        if(b==c || b>c){
            printf(":(\n");//2nd figure
        }
        if(b<c && (c-b)<(b-a)){
            printf(":(\n");//3rd figure
        }
        if(b<c && (c-b)>(b-a)){
            printf(":)\n");//4th figure
        }
    }else if (a==b){
        if(b<c){
            printf(":)\n");//7th figure
        }else if(c<b){
            printf(":(\n");//8th figure
        }
    }
    return 0;
}