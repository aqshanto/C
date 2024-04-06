#include<stdio.h>

int main(){
    int test,alternatives[5],position;
    while(test!=0){
        scanf("%d",&test);
        if(test==0)
            break;
        int count =0;
        for(int i=0;i<test;i++){
            scanf("%d",&alternatives[i]);
        }
        for(int i=0;i<test;i++){
            if(alternatives[i]<=127){
                count++;
                position=i;
            }
            if(count<1){
                printf("*\n");
                break;
            }
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
    return 0;
}