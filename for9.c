#include<stdio.h>
void main()
{
    int i,j,k;

    for (k=5,i = 1; i <= 5;i++,k--)
    {
        for (j = 1; j <= k; j++)
        {
            printf("_");
        }
        for (j = 1; j <= i; j++)
        {
            // printf("%d%d ",i,j);
            
            // printf("* ");
        }
        printf("\n");
   }
}