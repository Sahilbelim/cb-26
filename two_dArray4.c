#include <stdio.h>
void main()
{
    int number[3][3], i,k;

    for (i = 0; i < 3;i++)
    {
        for (k = 0; k < 3;k++)
        {
            printf("Enter Number %d - %d :", i + 1,k+1);
            scanf("%d", &number[i][k]);
        }
        // printf("Enter Number %d - 1 :",i+1);
        // scanf("%d", &number[i][0]);

        // printf("Enter Number %d - 2 :",i+1);
        // scanf("%d", &number[i][1]);

        // printf("Enter Number %d - 3 :",i+1);
        // scanf("%d", &number[i][2]);
    }

    // printf("Enter Number 1 - 1 :");
    // scanf("%d", &number[0][0]);

    // printf("Enter Number 1 - 2 :");
    // scanf("%d", &number[0][1]);

    // printf("Enter Number 1 - 3 :");
    // scanf("%d", &number[0][2]);

    // printf("Eneter Number 2 - 1 :");
    // scanf("%d", &number[1][0]);

    // printf("Enter Number 2 - 2 :");
    // scanf("%d", &number[1][1]);

    // printf("Enter Numbre 2 - 3 :");
    // scanf("%d", &number[1][2]);

    // printf("Eneter Number 3 - 1 :");
    // scanf("%d", &number[2][0]);

    // printf("Enter Number 3 - 2 :");
    // scanf("%d", &number[2][1]);

    // printf("Enter Numbre 3 - 3 :");
    // scanf("%d", &number[2][2]);

    // number[0][0] = 50;
    // number[0][1] = 30;
    // number[0][2] = 40;
    // number[1][0] = 40;
    // number[1][1] = 60;
    // number[1][2] = 70;
    // number[2][0] = 80;
    // number[2][1] = 70;
    // number[2][2] = 80;

    for (k = 0; k < 3; k++)
    {
        printf("Variable of  %d  \n", k+1);

        for (i = 0; i < 3; i++)
        {
            printf("number %d : %d \n", i + 1, number[k][i]);
        }
    }
    // k = 0;
    // printf("bunch of %dth number\n",k);

    // for (i = 0; i < 3; i++)
    // {
    //     printf("number %d : %d \n", i + 1, number[k][i]);
    // }
    // k++;
    // printf("bunch of %dth number\n",k);

    // for (i = 0; i < 3; i++)
    // {
    //     printf("number %d : %d \n", i + 1, number[k][i]);
    // }
    // k++;
    // printf("bunch of %dth number\n",k);

    // for (i = 0; i < 3; i++)
    // {
    //     printf("number %d : %d \n", i + 1, number[k][i]);
    // }
}