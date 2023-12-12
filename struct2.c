#include<stdio.h>

struct user
{
    // int rollNo;
    int heightI;
    int heightF;
    float weight;
};

void main()
{
    struct user u[100];

    // float Bmi[5];


    // int u1, u2;
    // u1.heightF = 10;
    // u1.heightI = 5;
    // u1.weight = 45.36;

    printf("Enter Height Of User 1 In Foot : ");
    scanf("%d", &u[0].heightF);
    printf("Enter Height Of User 1 In Inch : ");
    scanf("%d", &u[0].heightI);
    printf("Enter Weight Of User 1 In Kg : ");
    scanf("%f", &u[0].weight);




    printf("||||||||||||||User - 1 ||||||||||||||\n");
    printf("Height In Foot: %d\n", u[0].heightF);
    printf("Height In Inch: %d\n", u[0].heightI);
    printf("Weight In Kg: %.2f\n", u[0].weight);

}