#include <stdio.h>

int main(){
    int B,N;
    while(1){
        scanf("%d %d",&B,&N);
        if(B==0 && N==0){
            break;
        }
        int monetary[B];
        for(int i=0;i<B;i++){
            scanf("%d",&monetary[i]);
        }
        int matrix[N][3];
        for(int i=0;i<N;i++){
            for(int j=0;j<3;j++){
                scanf("%d",&matrix[i][j]);
            }
            //printf("%d\n",matrix[i][2]);
            monetary[matrix[i][1]-1]=monetary[matrix[i][1]-1]+matrix[i][2];
            monetary[matrix[i][0]-1]=monetary[matrix[i][0]-1]-matrix[i][2];
            //printf("%d %d %d\n",monetary[0],monetary[1],monetary[2]);
        }
        int check=1;
        for(int i=0;i<N;i++){
            if(monetary[i]<0){
                check=0;
                break;
            }
        }
        if (check==0){
            printf("N\n");
        }else{
            printf("S\n");
        }
        
    }
}