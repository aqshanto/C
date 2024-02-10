#include<stdio.h>
#include<math.h>

int main(){
    long long int power ,a,box1 ,box2 ,box3, extra;
    scanf("%lld",&a);
    power = pow(10,15);
    if(a>=0 && a<=power){
        box1 = a/24;
    extra = a%24;
    box2 = extra/12;
    extra = extra % 12;
    box3 = extra/6;
    extra = extra %6;
    if(extra !=0){
        box3++;
    }
    long long int total;
    total = box1 + box2 +box3;
    printf("%lld\n",total);
    }
    else{

    }
    return 0;
}
