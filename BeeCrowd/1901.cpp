#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int forest[N][N];
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            scanf("%d",&forest[i][j]);
        }
    }
    int a,b;
    int species[2*N];
    int k=0,count=0;
    for(int i=0;i<2*N;i++){
        scanf("%d %d",&a,&b);
        a=a-1;
        b=b-1;
        species[k]=forest[a][b];
        k++;
    }
    for(int i=0;i<2*N;i++){
        for(int j=i+1;j<2*N;j++){
            if(species[i]==species[j]){
                count++;
                break;
            }
        }
    }
    printf("%d\n",(2*N)-count);
    return 0;
}