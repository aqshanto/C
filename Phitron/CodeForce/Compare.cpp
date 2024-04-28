//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C
// #include<stdio.h>
// #include<string.h>

// int main(){
//     char str1[20];
//     char str2[20];
//     scanf("%s",str1);
//     scanf("%s",str2);
//     if(strcmp(str1,str2)==0){
//         printf("%s",str1);
//     }else if(strcmp(str1,str2)<0){
//         printf("%s",str1);
//     }else if(strcmp(str1,str2)>0){
//         printf("%s",str2);
//     }
//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main() {
    char x[21], y[21];
    scanf("%s %s", x, y);

    int len_x = strlen(x);
    int len_y = strlen(y);

    int min_len = len_x < len_y ? len_x : len_y;

    for (int i = 0; i < min_len; i++) {
        if (x[i] < y[i]) {
            printf("%s\n", x);
            return 0;
        } else if (x[i] > y[i]) {
            printf("%s\n", y);
            return 0;
        }
    }

    
    if (len_x < len_y) {
        printf("%s\n", x);
    } else {
        printf("%s\n", y);
    }

    return 0;
}
