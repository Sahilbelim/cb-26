
/*
1
12
123
1234
12345
*/

#include <stdio.h>
void main()
{
     int j, i,k;
     i = 1;
     k=1;
     while (i <= 5)
     {
          j = 1;
          while (j <= k)
          {
               printf("%d", j);
               j++;
          }

          printf("\n");
          i++;
          k++;
     }



     // j=1;
     //      while (j<=5)
     //      {
     //           printf("%d",j);
     //           j++;
     //      }

     // printf("%d",j);
     // j++;
     // printf("%d",j);
     // j++;
     // printf("%d",j);
     // j++;
     // printf("%d",j);
}