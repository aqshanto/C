#include<stdio.h>

int main(){
    float N1, N2, N3, N4,average,exam_score;

    scanf("%f %f %f %f", &N1,&N2,&N3,&N4);
    average = (((N1*2)+(N2*3)+(N3*4)+(N4*1))/(2+3+4+1));
    printf("Media: %.1f\n",average);
    
    if(average<5.0){
        printf("Aluno reprovado.\n");
    }
    else if(average>7.0){
        printf("Aluno aprovado.\n");
    }
    else if(average>=5.0 && average<=6.9){
        printf("Aluno em exame.\n");
        scanf("%f", &exam_score);
        printf("Nota do exame: %0.1f\n", exam_score);
        float average1 = ((average+exam_score)/2);
        if(average1>=5.0){
            printf("Aluno aprovado.\n");
        }
        else if(average1<=4.9){
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %0.1f\n",average1);
    }

    return 0;
}