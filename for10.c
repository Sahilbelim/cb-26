#include <stdio.h>
void main()
{
    int i, j,k,number;

    printf("Enter Number of Line : ");
    scanf("%d", &number);
    printf("Value of Number %d  \n", number);

    for (i = 1,k=number; i <= number;i++,k--)
    {

        for (j = 1; j <= k; j++)
        {
            printf("_");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}