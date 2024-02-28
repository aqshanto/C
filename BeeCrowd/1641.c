#include<stdio.h>
#include<math.h>

int main(){
    int R,W,L,i=0;
    while (R!=0)
    {
        scanf("%d",&R);
        if (R==0)
        {
            break;
        }
        scanf("%d %d",&W,&L);
        float diogonal = sqrt(pow(W,2)+pow(L,2));
        if((R*2)>=diogonal){
            i++;
            printf("Pizza %d fits on the table.\n",i);
        }else{
            i++;
            printf("Pizza %d does not fit on the table.\n",i);
        }
    }
    
    return 0;
}