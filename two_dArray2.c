#include<stdio.h>
void main()
{
    int number[3][3],i;

    number[0][0] = 50;
    number[0][1] = 30;
    number[0][2] = 40;
    number[1][0] = 40;
    number[1][1] = 60;
    number[1][2] = 70;
    number[2][0] = 80;
    number[2][1] = 70;
    number[2][2] = 80;

    printf("bunch of 0th number\n");
    // i = 0;
    // printf("number 1 : %d \n", number[0][i]);
    // i++;
    // printf("number 2 : %d \n", number[0][i]);
    // i++;
    // printf("number 3 : %d \n", number[0][i]);

    for (i = 0; i < 3;i++)
    {
        printf("number %d : %d \n",i+1, number[0][i]);
    }

        printf("bunch of 1th number\n");

    // printf("number 1 : %d \n", number[1][0]);
    // printf("number 2 : %d \n", number[1][1]);
    // printf("number 3 : %d \n", number[1][2]);
        for (i = 0; i < 3; i++)
        {
            printf("number %d : %d \n", i+1, number[1][i]);
        }
    printf("bunch of 2th number\n");
    // printf("number 1 : %d \n", number[2][0]);
    // printf("number 2 : %d \n", number[2][1]);
    // printf("number 3 : %d \n", number[2][2]);
    for (i = 0; i < 3; i++)
    {
        printf("number %d : %d \n", i+1, number[2][i]);
    }
}