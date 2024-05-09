#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    
    if(a > b) {
        if(b <= c) {
            printf(":)\n"); // Case 1
        } else if (b > c && (b - c) < (a - b)) {
            printf(":)\n"); // Case 5
        } else if (b > c && (b - c) >= (a - b)) {
            printf(":(\n"); // Case 6
        }
    } else if (a < b) {
        if(b >= c) {
            printf(":(\n"); // Case 2
        } else if (b < c && (c - b) < (b - a)) {
            printf(":(\n"); // Case 3
        } else if (b < c && (c - b) >= (b - a)) {
            printf(":)\n"); // Case 4
        }
    } else if (a == b) {
        if (b < c) {
            printf(":)\n"); // Case 7
        } else if (b > c) {
            printf(":(\n"); // Case 8
        }else{
            printf(":(\n"); // Case otherwise
        }
    }
    
    return 0;
}
