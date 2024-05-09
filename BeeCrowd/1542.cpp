#include<stdio.h>
#include<math.h>
int main(){
    int q,d,p;
    while(1){
        scanf("%d",&q);
        if(q==0){
            break;
        }
        scanf("%d %d",&d,&p);
        int ans;
        ans=(d*p*q)/abs(q-p);
        if(ans==1){
            printf("%d pagina\n",ans);
        }else{
            printf("%d paginas\n",ans);
        }
    }
    return 0;
}
