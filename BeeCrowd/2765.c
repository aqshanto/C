#include<stdio.h>
#include<string.h>

int main(){
    char line[205];
    int i,j,x;
    while (fgets(line,205,stdin)!=0){
        i=0;
        while (line[i]!=','){
            printf("%c",line[i]);
            ++i;
        }
        printf("\n");
        i++;
        x=strlen(line);
        for(int j=i;j<x;j++){
            printf("%c",line[j]);
        }       
    }
    return 0;
}