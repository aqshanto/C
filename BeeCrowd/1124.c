#include<stdio.h>
#include<math.h>

int main(){
    double l,c,r1,r2;
    for (int i = 1;; i++){
        scanf("%lf %lf %lf %lf",&l,&c,&r1,&r2);
        if (l==0&&c==0&&r1==0&&r2==0){
            break;
        }
        //printf("l = %lf c = %lf r1 = %lf r2 = %lf\n",l,c,r1,r2);
        double cir1extarea = ((sqrt(2)*(2*r1))-(2*r1))/2;
        double cir2extarea = ((sqrt(2)*(2*r2))-(2*r2))/2;
        double diagonal = sqrt((l*l)+(c*c));
        
        double area1= cir1extarea+(2*r1);
        double area2= cir2extarea+(2*r2);
        double total=area1+area2;
        //printf("cir1extarea = %lf cir2extarea = %lf area1 = %lf area2 = %lf diagonal = %lf total = %lf\n",cir1extarea,cir2extarea,area1,area2,diagonal,area1+area2);
        if (diagonal>=total){
            printf("S\n");
        }
        else{
            printf("N\n");
        }
    }
    
    return 0;
}