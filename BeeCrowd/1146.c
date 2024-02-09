#include<stdio.h>

int main(){
    int a;
    
    for(int i=0; ;i++){
        scanf("%d",&a);
        if(a==0){
                break;
        }else{
            for(int i =1; i<a; i++){
            printf("%d ",i);
        }
            printf("%d\n",a);
        }
    }
    
    return 0;
}