#include<stdio.h>
#include<string.h>

int main(){
    int num;
    char sheldon[30],raj[30],a[30],b[30];
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        scanf("%s %s",&sheldon,&raj);
        if((strcmp(sheldon,raj)==0)){
            printf("Caso #%d: De novo!\n",i);
        }
        else if((strcmp("pedra",sheldon)==0)){
            if((strcmp("papel",raj)==0) || (strcmp("Spock",raj)==0)){
                printf("Caso #%d: Raj trapaceou!\n",i);
            }
            else if((strcmp("tesoura",raj)==0) || (strcmp("lagarto",raj)==0)){
                printf("Caso #%d: Bazinga!\n",i);
            }
        }
        else if((strcmp("papel",sheldon)==0)){
            if((strcmp("tesoura",raj)==0) || (strcmp("lagarto",raj)==0)){
                printf("Caso #%d: Raj trapaceou!\n",i);
            }
            else if((strcmp("pedra",raj)==0) || (strcmp("Spock",raj)==0)){
                printf("Caso #%d: Bazinga!\n",i);
            }
        }
        else if((strcmp("tesoura",sheldon)==0)){
            if((strcmp("pedra",raj)==0) || (strcmp("Spock",raj)==0)){
                printf("Caso #%d: Raj trapaceou!\n",i);
            }
            else if((strcmp("papel",raj)==0) || (strcmp("lagarto",raj)==0)){
                printf("Caso #%d: Bazinga!\n",i);
            }
        }
        else if((strcmp("lagarto",sheldon)==0)){
            if((strcmp("pedra",raj)==0) || (strcmp("tesoura",raj)==0)){
                printf("Caso #%d: Raj trapaceou!\n",i);
            }
            else if((strcmp("papel",raj)==0) || (strcmp("Spock",raj)==0)){
                printf("Caso #%d: Bazinga!\n",i);
            }
        }
        else if((strcmp("Spock",sheldon)==0)){
            if((strcmp("papel",raj)==0) || (strcmp("lagarto",raj)==0)){
                printf("Caso #%d: Raj trapaceou!\n",i);
            }
            else if((strcmp("pedra",raj)==0) || (strcmp("tesoura",raj)==0)){
                printf("Caso #%d: Bazinga!\n",i);
            }
        }
    }
    return 0;
}