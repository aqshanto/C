#include<stdio.h>

int main(){
    char num[1001];
    int arr[10],i=0;
    while (scanf("%s",num)!=EOF){
        for(int i=0;i<=9;i++){
            arr[i]=0;
        }
        for(int i=0;num[i]!='\0';i++){
            if(num[i]==48)
                arr[0]++;
            if(num[i]==49)
                arr[1]++;
            if(num[i]==50)
                arr[2]++;
            if(num[i]==51)
                arr[3]++;
            if(num[i]==52)
                arr[4]++;
            if(num[i]==53)
                arr[5]++;
            if(num[i]==54)
                arr[6]++;
            if(num[i]==55)
                arr[7]++;
            if(num[i]==56)
                arr[8]++;
            if(num[i]==57)
                arr[9]++;
        }
        int great=0,position=0,i,check=-5;
        for(i=0;i<=9;i++){
            if(arr[i]>=great){
                great=arr[i];
                position=i;
                if(position>check){
                    check=position;
                }
            }
        }
        printf("%d\n",check);
        // for(int i=0;i<=9;i++){
        //     printf("%d\n",arr[i]);
        // }
    }
    return 0;
}