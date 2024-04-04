#include<stdio.h>

int main(){
    float M[12][12],total=0.0;
    int A;
    char ch;
    scanf("%c",&ch);
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            scanf("%f",&M[i][j]);
        }
    }
    for(int i = 0; i < 12; i++){
			for(int j = 0; j < 12; j++){
				if (j>i && (j+i)<11){
					total += M[i][j];
                }
            }
    }
    if (ch=='S'){
        printf("%0.1f\n",total);
    }else if (ch=='M'){
        printf("%0.1f\n",(total/30.0));
    }
    
    return 0;
}