#include<stdio.h>
#include<string.h>

int main(){
    int test;
    while (test!=0){
        scanf("%d",&test);
        char ch[test][55];
        int len[test],max=0;
        for(int i=0;i<test;i++){
            scanf("%s",ch[i]);
            len[i]=strlen(ch[i]);
            if(len[i]>max){
                max=len[i];
            }
        }
        for(int i=0;i<test;i++){
            int spacelen=max-len[i];
            for(int i=0;i<spacelen;i++){
                printf(" ");
            }
            printf("%s\n",ch[i]);
        }
    }
    
    return 0;
}