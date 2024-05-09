#include <stdio.h>

int main(){
    int n,v,lap;
    while(1){
        scanf("%d %d",&n,&lap);
        v=lap;
        int check=0;
        if(n==0 && v==0){
            break;
        }
        int start=0,count=0,i=1;
        while(start<=n){
            start+=v;
            count++;
            if(v==1 && count==1){
                v=lap-i;
                i++;
                if(v==0){
                    break;
                }
            }
            if(count==v){
                v--;
                count=0;
            }
            if(start==n){
                check=1;
                break;
            }
        }
        if(check==1)printf("possivel\n");
        else printf("impossivel\n");
    }
}