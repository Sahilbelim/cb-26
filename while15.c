
/*

55555
4444
333
22
1
*/

#include <stdio.h>
void main()
{
     int j, i,k;
     i = 1;
     k=5;
     while (i <= 5)
     {
          j = 1;
          while (j <= k)
          {
               printf("%d",k);
               j++;
          }

          printf("\n");
          i++;
          k--;
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