//PROCESS 01


// #include<stdio.h>

// int main(){
//     int n,arr[50];
//     scanf("%d",&n);
//     arr[1]=0;
//     arr[2]=1;
//     printf("%d ",arr[1]);
//     printf("%d ",arr[2]);
//     arr[3] = arr[1]+arr[2];
//     for(int i=3;i<=(n-1);i++){
//         printf("%d ",arr[i]);
//         arr[i+1] = arr[i-1]+arr[i];
//     }
//     printf("%d\n",arr[n]);
//     return 0;
// }

//PROCESS 02

// #include<stdio.h>

// int main(){
//     int n,a,b,result;
//     a=0;
//     b=1;
//     scanf("%d",&n);
//     for (int i = 0; i<(n-1); i++){
//         printf("%d ",a);
//         result =a+b;
//         a=b;
//         b=result;
//     }
//     printf("%d\n",a);
//     return 0;
// }

//PROCESS 03

#include<stdio.h>

int main(){
    int n,arr[50];
    scanf("%d",&n);
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    for(int i=0;i<(n-1);i++){
        printf("%d ",arr[i]);
    }
    printf("%d\n",arr[n-1]);
    return 0;
}