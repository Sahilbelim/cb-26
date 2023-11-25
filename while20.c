#include<stdio.h>
void main()
{
    int i, j,k;
    i = 1;
    k = 5;
    while(i<=5)
    {
        j = 1;
        while (j <= i)
        {
            printf("_");
            j++;
        }
        j = 1;
        while (j <= k)
        {
            // printf("* ");
            // printf("%d%d%d ",i,j,k);

            if(i==1 || j==1 || j==k)
            {
            printf("* ");
            }
            else
            {
            printf("  ");
            }

            j++;
        }
        printf("\n");
        i++;
        k--;
    }
}