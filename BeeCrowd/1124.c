#include<stdio.h>
#include<math.h>

int main(){
    int l,c,r1,r2;
    for (int i = 1;; i++){
        scanf("%d %d %d %d",&l,&c,&r1,&r2);
        if (l==0&&c==0&&r1==0&&r2==0){
            break;
        }
        float area1= (r1+(r1*sqrt(2)));
        float area2= (r2+(r2*sqrt(2)));
        float elevator = sqrt(pow(l,2)+pow(c,2));
        if (elevator>=(area1+area2)){
            printf("S\n");
        }
        else{
            printf("N\n");
        }
    }
    
    return 0;
}