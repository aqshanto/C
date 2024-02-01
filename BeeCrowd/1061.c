#include<stdio.h>

int main(){
    int D1,D2,h1,h2,m1,m2,s1,s2;
    char a1,a2,a3,a4,a5,a6,c1,c2,c3,c4;

    // scanf("%c%c%c %d",&a1,&a2,&a3,&D1);
    // scanf("%d %c %d %c %d", &h1,&c1,&m1,&c2,&s1);
    // scanf("%c%c%c %d %d %c %d %c %d",&a4,&a5,&a6,&D2,&h2,&c3,&m2,&c4,&s2);
    
    D1 = 5;
    D2 = 9;
    h1 = 8;
    h2 = 6;
    m1 = 12;
    m2 = 13;
    s1 = 23;
    s2 = 23;

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