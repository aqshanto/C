#include<stdio.h>

int main(){
    int test;
    while(scanf("%d",&test)!=EOF){
        int size;
        char ch;
        int a=0,b=0;
        int arr1[test],arr2[test];
        for (int i = 0; i < test; i++) {
            arr1[i] = 0;
            arr2[i] = 0;
        }
        for(int i=0;i<test;i++){
            scanf("%d %c",&size,&ch);
            arr1[a]=0;
            if(ch=='D'){
                int count=0;
                for(int j=0;j<=i;j++){
                    if(arr1[j]==size){
                        count=1;
                        break;
                    }
                }
                if(count==0){
                    arr1[a]=size;
                    a++;
                }
            }else if(ch=='E'){
                int count=0;
                for(int j=0;j<=i;j++){
                    if(arr2[j]==size){
                        count=1;
                        break;
                    }
                }
                if(count==0){
                    arr2[b]=size;
                    b++;
                }
            }
        }
        // for(int i=0;i<a;i++){       //printing the array 1 where stored the Right boot sizes
        //     printf("%d ",arr1[i]);
        // }
        // printf("\n");
        // for(int i=0;i<b;i++){        //printing the array 1 where stored the left boot sizes
        //     printf("%d ",arr2[i]);
        // }printf("\n");

        int bootpair=0;
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(arr1[i]==arr2[j]){
                    bootpair++;
                    break;
                }
            }
        }
        printf("%d\n",bootpair);
    }
    return 0;
}