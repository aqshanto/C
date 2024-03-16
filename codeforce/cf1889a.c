#include <stdio.h>

int main() {
  int test,num;
  scanf("%d",&test);
  for(int i=0;i<test;i++){
    scanf("%d",&num);
    if((num-1)%3==0 || (num+1)%3==0){
      printf("First\n");
    }
    else{
      printf("Second\n");
    }
  }
  return 0;
}