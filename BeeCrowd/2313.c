#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d %d %d",&a,&b,&c);
    d=pow(a,2);
    e=pow(b,2);
    f=pow(c,2);
    if(a+b>c && b+c>a && a+c>b){
        if(a==b && b==c && c==a){
            printf("Valido-Equilatero\n");
            if(f==(d)+(e) || d==(f)+(e) || e==(d)+(f)){
                printf("Retangulo: S\n");
            }
            else{
            printf("Retangulo: N\n");
            }
        }
        else if(a==b || b==c || c==a){
            printf("Valido-Isoceles\n");
            if(f==(d)+(e) || d==(f)+(e) || e==(d)+(f)){
                printf("Retangulo: S\n");
            }
            else{
            printf("Retangulo: N\n");
            }
        }
        else if(a!=b && b!=c && c!=a){
            printf("Valido-Escaleno\n");
            if(f==(d)+(e) || d==(f)+(e) || e==(d)+(f)){
                printf("Retangulo: S\n");
            }
            else{
            printf("Retangulo: N\n");
            }
        }
    }
    else{
        printf("Invalido\n");
    }
    return 0;
}