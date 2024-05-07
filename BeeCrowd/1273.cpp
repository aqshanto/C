#include<stdio.h>
#include<string.h>

int main(){
    int test=9,a=0;
    while (test!=0){
        scanf("%d",&test);
        if(test==0){
            break;
        }
        char ch[test][55];
        int len[test],max=0;
        for(int i=0;i<test;i++){
            scanf("%s",ch[i]);
            len[i]=strlen(ch[i]);
            if(len[i]>max){
                max=len[i];
            }
        }if(a!=0){
            printf("\n");
        }
        for(int i=0;i<test;i++){
            printf("%*s\n",max,ch[i]);
        }
        a++;
    }
    
    return 0;
}