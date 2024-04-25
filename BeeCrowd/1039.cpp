#include<stdio.h>
#include<math.h>

int main(){
    int r1,x1,x2,y1,y2,r2;
    while(scanf("%d %d %d %d %d %d",&r1,&x1,&y1,&r2,&x2,&y2)!=EOF){
        double distance;
        if(x1==x2 && y1==y2){
            if(r1>=r2){
                printf("RICO\n");
            }else if (r1<r2){
                printf("MORTO\n");
            }
        }else{
            int ans1=abs(x2-x1);
            int ans2=abs(y2-y1);
            distance=sqrt((ans1*ans1)+(ans2*ans2));
            distance=distance+r2;
            //printf("%lf",distance);
            if(distance>=(double)r1){
                printf("MORTO\n");
            }else if(distance<(double)r1){
                printf("RICO\n");
            }
        }
    }
    
    return 0;
}