#include<stdio.h>

int main(){
    int hi,mi,hf,mf,htime,mtime;
    scanf("%d %d %d %d",&hi,&mi,&hf,&mf);
    
    
    if(mf>mi && hf>hi){
        mtime =mf-mi;
        htime =hf-hi;
    }
    if(mf<mi && hf>hi){
        mtime =(mf+60)-mi;
        htime =hf-hi-1;
    }
    if(mf>mi && hf<hi){
        mtime =mf-mi;
        htime =(hf-hi)+24;
    }
    if(mf<mi && hf<hi){
        mtime = (mf-mi)+60;
        htime = (hf-hi-1)+24;
    }
    if(mf==mi && hf==hi){
        mtime=0;
        htime=24;
    }
    if(mf==mi && hf>hi){
        mtime=0;
        htime=(hf-hi);
    }
    if(mf==mi && hf<hi){
        mtime =0;
        htime =(hf-hi)+24;
    }
    if(mf<mi && hf==hi){
        mtime =(mf+60)-mi;
        htime =23;
    }
    if(mf>mi && hf==hi){
        mtime =mf-mi;
        htime =0;
    }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",htime,mtime);
    return 0;
}