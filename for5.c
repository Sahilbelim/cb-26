// 12345 -
// 1234
// 123
// 12
// 1
#include <stdio.h>
void main()
{
    int i,j,k;

    k = 5;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= k; j++)
        {
            printf("%d  ", j);
        }

        printf("\n");
     k--;
   }
  
}