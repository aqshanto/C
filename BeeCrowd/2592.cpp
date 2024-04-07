#include<stdio.h>

int main(){
    int num;
    while(num!=0){
        scanf("%d",&num);
        if(num==0){
            break;
        }
        int arr1[num],arr2[num];
        for(int i=0;i<num;i++){
            arr1[i]=i+1;
        }
        // for(int i=0;i<num;i++){
        //     printf("%d ",arr1[i]);
        // }
        //printf("\n");
        int count=0,check=0;
        while(check!=num){
            check=0;
            for(int i=0;i<num;i++){
                scanf("%d",&arr2[i]);
            }
            for(int i=0;i<num;i++){
                if(arr1[i]!=arr2[i]){
                    count++;
                    break;
                }else{
                    check++;
                    if(check==num){
                        break;
                    }
                }
            }
        }
        printf("%d\n",count+1);
    }
    
    return 0;
}