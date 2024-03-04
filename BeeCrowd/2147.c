#include<stdio.h>

int main(){
    int n;
    float T;
    char ch[10010];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",ch);
        for(int j=1;j<10010;j++){
            if(ch[j]=='\0'){
                T=j*0.01;
                break;
            }
        }
        printf("%0.2f\n",T);
    }
    return 0;
}