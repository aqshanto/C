#include<stdio.h>

int main(){
    int test,alternatives[5],position;
    while(test!=0){
        scanf("%d",&test);
        if(test==0)
            break;
        int count;
        for(int k=0;k<test;k++){
            count=0,position=0;
            for(int j=0;j<5;j++){
                scanf("%d",&alternatives[j]);
            }
            for(int i=0;i<5;i++){
                if(alternatives[i]<=127){
                    count++;
                    position=i;
                    //printf("count-%d i-%d position-%d\n",count,i,position);
                }
            }
            if(count>1 || count<1){
                printf("*\n");
            }
            if(count==1){
                if(position==0){
                    printf("A\n");
                }
                if(position==1){
                    printf("B\n");
                }
                if(position==2){
                    printf("C\n");
                }
                if(position==3){
                    printf("D\n");
                }
                if(position==4){
                    printf("E\n");
                }
            }
        }
    }
    return 0;
}