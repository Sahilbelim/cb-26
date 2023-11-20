// 1 -
// 2 3
// 4 5 6
// 7 8 9 10




#include<stdio.h>
void main()
{
    int i,j,k;
    k = 1;
    i = 1;

    while (i<=4)
    {
        j = 1;

        while (j <= i)
        {
            printf("%d  ",k);
            k++;

            j++;
        }

        printf("\n");

        i++;
  }


}