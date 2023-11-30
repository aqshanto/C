/*Practice Qs 56
    Enter Address (house no, block , city, state) of 5 people.*/

#include <stdio.h>
#include <string.h>

struct address{
    int houseNo ;
    int block;
    char city[100];
    char state[100];
}; 

void printInfo(struct address adds);

int main(){
    struct address adds[5];
    printf("enter the info of Person 1:");
    scanf("%d", &adds[0].houseNo);
    scanf("%d", &adds[0].block);
    scanf("%s", &adds[0].city);
    scanf("%s", &adds[0].state);

    printf("enter the info of Person 2:");
    scanf("%d", &adds[1].houseNo);
    scanf("%d", &adds[1].block);
    scanf("%s", &adds[1].city);
    scanf("%s", &adds[1].state);

    printf("enter the info of Person 3:");
    scanf("%d", &adds[2].houseNo);
    scanf("%d", &adds[2].block);
    scanf("%s", &adds[2].city);
    scanf("%s", &adds[2].state);

    printf("enter the info of Person 4:");
    scanf("%d", &adds[3].houseNo);
    scanf("%d", &adds[3].block);
    scanf("%s", &adds[3].city);
    scanf("%s", &adds[3].state);

    printf("enter the info of Person 5:");
    scanf("%d", &adds[4].houseNo);
    scanf("%d", &adds[4].block);
    scanf("%s", &adds[4].city);
    scanf("%s", &adds[4].state);

    printInfo(adds[0]);
    printInfo(adds[1]);
    printInfo(adds[2]);
    printInfo(adds[3]);
    printInfo(adds[4]);

    return 0;
}

void printInfo(struct address adds){
    printf("Address is :%d, %d, %s, %s\n", adds.houseNo, adds.block, adds.city, adds.state);
}