//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J
#include<stdio.h>
#include<string.h>

int main(){
    char ch[10000000];
    scanf("%s",ch);
    printf("Hello");
    int len=strlen(ch);
    int arr[26];
    for(int i=0;i<26;i++){
        arr[i]=0;
    }
    for(int i=0;i<len;i++){
        int pos=(int)ch[i]-97;
        arr[pos]++;
    }
    for(int i=0;i<26;i++){
        if(arr[i]>0){
            printf("%c : %d\n",i+97,arr[i]);
        }
    }
    return 0;
}