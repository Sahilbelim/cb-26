#include <stdio.h>
void main()
{
    int number[3][3], i,k;

    number[0][0] = 50;
    number[0][1] = 30;
    number[0][2] = 40;
    number[1][0] = 40;
    number[1][1] = 60;
    number[1][2] = 70;
    number[2][0] = 80;
    number[2][1] = 70;
    number[2][2] = 80;

    for (k = 0; k < 3;k++)
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