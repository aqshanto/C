#include<stdio.h>

int main(){
    int password =2002,user_pass;
    for(int i=0;;i++){
        scanf("%d",&user_pass);
        if(user_pass==password){
            printf("Acesso Permitido\n");
            break;
        }else
        {
            printf("Senha Invalida\n");
        }
    }
    return 0;
}