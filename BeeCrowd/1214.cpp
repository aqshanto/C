#include<stdio.h>

int main(){
    int test,stu;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        scanf("%d",&stu);
        int sum=0;
        int num[stu];
        for(int j=0;j<stu;j++){
            scanf("%d",&num[j]);
            sum+=num[j];
        }
        int count=0;
        float average=sum/stu;
        for(int j=0;j<stu;j++){
            if((float)num[j]>average){
                count++;
            }
        }
        printf("%0.3f%%\n",((float)count/(float)stu)*100);
    }
    return 0;
}