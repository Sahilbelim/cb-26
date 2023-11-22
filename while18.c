/*
_* * * * * 
__* * * *
___* * *
____* *
_____*
*/


#include<stdio.h>
void main()
{
    int j,i,k;
    i = 1;
    k = 5;
    while (i<=5)
    {
        j = 1;
        while (j <= i)
        {
            printf("_");
            j++;
        }

        j = 1;
        while (j <=k )
        {
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
        k--;
    }
    /*
    j = 1;
    while(j<=5)
    {
        printf("_");
        j++;
    }

    j = 1;
    while (j<=5)
    {
        printf("* ");
        j++;
    }
    printf("\n");

    j = 1;
    while(j<=5)
    {
        printf("_");
        j++;
    }
    j = 1;
    while (j<=5)
    {
        printf("* ");
        j++;
    }

    printf("\n");
    j = 1;
    while (j<=5)
    {
        printf("_");
        j++;
    }
    j = 1;
    while (j<=5)
    {
        printf("* ");
        j++;
    }
    printf("\n");
    j = 1;
    while (j<=5)
    {
        printf("_");
        j++;
    }
    j = 1;
    while(j<=5)
    {
        printf("* ");
        j++;
    }
    printf("\n");
    */
}