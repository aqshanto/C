#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        char c1[10002],c2[10002];
        scanf("%s %s",c1,c2);
        int size=strlen(c1);
        int count=0;
        for(int i=0;i<size;i++){
            if(c1[i]<c2[i]){
                count+=c2[i]-c1[i];
            }else if(c1[i]>c2[i]){
                count+=abs(c1[i]-c2[i]-25)+1;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}