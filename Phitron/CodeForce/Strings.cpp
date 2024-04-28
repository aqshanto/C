//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D
#include<stdio.h>
#include<string.h>

int main(){
    char str1[100];
    char str2[100];
    scanf("%s",str1);
    scanf("%s",str2);
    int len1=strlen(str1);
    int len2=strlen(str2);
    printf("%d %d\n",len1,len2);
    char newstr[len1+len2];
    strcpy(newstr,str1);
    strcat(newstr,str2);
    printf("%s\n",newstr);
    char temp=str1[0];
    str1[0]=str2[0];
    str2[0]=temp;
    printf("%s %s\n",str1,str2);
    return 0;
}