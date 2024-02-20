#include<stdio.h>

int main(){
    int n,a,b,og=0,child=0;
    for(int i=1;;i++){
        scanf("%d",&n);
        og =0;
        child =0;
        if(n==0){
            break;
        }
        for (int i = 1; i <=n; i++){
        scanf("%d %d",&a,&b);
        if(a>b){
            og++;
        }else if(a<b){
            child++;
        }else{
            
        }
        }
        printf("%d %d\n",og,child);
    }
    return 0;
}