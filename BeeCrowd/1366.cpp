#include <stdio.h>

int main(){
    int n;
    while(1){
        scanf("%d",&n);
        if(n==0){
            break;
        }
        int a,b;
        int total=0;
        for(int i=0;i<n;i++){
            scanf("%d %d",&a,&b);
            total+=b/2;
        }
        printf("%d\n",total/2);
    }
    return 0;
}
