#include<stdio.h>
#include<math.h>

int main(){
    int num;
    while(scanf("%d",&num)!=EOF){
        int check=0;
        for(int i=1;i<=sqrt(num);i++){
            for(int j=1;j<sqrt(num);j++){
                if((i*i+j*j)==num){
                    printf("YES\n");
                    check=1;
                    break;
                }
            }
            if(check==1){
                break;
            }
        }
        if(check==0){
            printf("NO\n");
        }

    }
    return 0;
}
