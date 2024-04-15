#include<stdio.h>

int main(){
    long long int eye,mouth,body,count=0;
    scanf("%lld %lld %lld",&eye,&mouth,&body);
    if(eye<mouth && eye<body){
        count=count+eye;
        mouth=mouth-eye;
        body=body-eye;
        eye=eye-eye;
    }
    else if(mouth<eye && mouth<body){
        count=count+mouth;
        eye=eye-mouth;
        body=body-mouth;
        mouth=mouth-mouth;
    }else{
        count=count+body;
        eye=eye-body;
        mouth=mouth-body;
        body=body-body;
    }
    //printf("%lld %lld %lld",eye,mouth,body);
    if(eye==0 || body==0){
        printf("%lld\n",count);
    }else{
        if((eye/2)<body){
            count=count+(eye/2);
            printf("%lld\n",count);
        }else{
            count=count+body;
            printf("%lld\n",count);
        }
    }
    return 0;
}