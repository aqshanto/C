#include<stdio.h>

int main(){
    int D1,D2,h1,h2,m1,m2,s1,s2;
    char a1,a2,a3,a4,a5,a6;

    scanf(" %c%c%c %d",&a1,&a2,&a3,&D1);
    scanf("%d : %d : %d", &h1,&m1,&s1);
    scanf(" %c%c%c %d",&a4,&a5,&a6,&D2);
    scanf("%d : %d : %d", &h2,&m2,&s2);

    int s_time_sec,e_time_sec,event_time, rest;
    
    s_time_sec=(D1*24*60*60)+(h1*60*60)+(m1*60)+s1;
    e_time_sec=(D2*24*60*60)+(h2*60*60)+(m2*60)+s2;
    event_time = e_time_sec-s_time_sec;
    
    int W,X,Y,Z;
    
    W = event_time/(24*60*60);
    rest = event_time%(24*60*60);
    X = rest / (60*60);
    rest = rest%(60*60);
    Y = rest / 60;
    Z = rest%(60);
    
    printf("%d dia(s)\n",W);
    printf("%d hora(s)\n",X);
    printf("%d minuto(s)\n",Y);
    printf("%d segundo(s)\n",Z);
    return 0;
}