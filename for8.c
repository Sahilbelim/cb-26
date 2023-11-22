#include<stdio.h>
void main()
{
    int i,j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
        
    }
    /*
    for (j = 1; j <= 5;j++)
    {
        printf("%d ", i);
    }
    printf("\n");
    i++;

    for(j = 1; j <= 5;j++)
    {
        printf("%d ", i);
    }
    printf("\n");
    i++;

    for (j = 1; j <= 5;j++)
    {
        printf("%d ", i);
    }
    printf("\n");
    i++;

    for(j = 1; j <= 5;j++)
    {
        printf("%d ", i);
    }
    printf("\n");
    i++;
    */
}