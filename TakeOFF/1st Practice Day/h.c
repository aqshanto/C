#include<stdio.h>
#include<string.h>

int main(){
    char w[100];
    scanf("%s",w);
    int arr[26];
    for(int i=0;i<26;i++){
        arr[i]=0;
    }
    int size=strlen(w);
    for(int i=0;i<size;i++){
        arr[w[i]-'a']++;
    }
    int count=0;
    for(int i=0;i<26;i++){
        if(arr[i]%2!=0){
            count=1;
            break;
        }
    }
    if(count==1){
        printf("No\n");
    }else if(count==0){
        printf("Yes\n");
    }
    return 0;
}